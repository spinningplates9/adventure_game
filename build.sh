#!/bin/bash

BUILD_DIR="./build_linux/"
MAKE_FILE="./build_linux/Makefile"

echo ====================================
echo   CPP Practice Build Script
echo ====================================

# Create build directory if it doesn't exist
if [[ ! -d "$BUILD_DIR" ]]; then 
  mkdir build_linux
fi

# Configure CMake (only if not already configured)
if [[ ! -f "$MAKE_FILE" ]]; then
    echo Configuring CMake...
    cmake -B $BUILD_DIR -G "Unix Makefiles"
    if [[ $? == 1 ]]; then
        echo CMake configuration failed!
        exit 1
    fi
fi


options=("Build" "Build & Run" "Debug" "Cancel")

select opt in "${options[@]}"
do
    case $opt in
        "Build")
            echo -- 
            echo Building project...
            cmake --build build_linux -j 16 

            if [[ $? == 1 ]]; then
                echo Build failed!
                exit 1
            fi

            if [[ $? == 0 ]]; then
              echo Build successful!
            fi
            break
            ;;
        "Build & Run")
            echo -- 
            echo Building project...
            cmake --build build_linux -j 16 

            if [[ $? == 1 ]]; then
                echo Build failed!
                exit 1
            fi

            if [[ $? == 0 ]]; then
              echo Build successful!
            fi
            cd build_linux && ./potionshop
            break
            ;;        
        "Debug")
            echo "Figure how to debug in NVIM!!"
            break
            ;;
        "Cancel")
            echo "Exiting script. Goodbye!"
            break # Exit the select loop and the script
            ;;
        *)
            # Handle invalid input
            echo "Invalid option $REPLY. Please select a valid number."
            ;;
    esac
done

