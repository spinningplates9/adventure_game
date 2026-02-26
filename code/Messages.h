#pragma once

#include <iostream>


class Messages {

public:
  Messages();
  std::string getUserInput();
  std::string welcomeMessage();  
  std::string shopGreeting(); 
  std::string twoLineSkip(); 

protected:
  std::string userInput {};
  std::string skips = "\n\n";
  std::string shopGreet =
      "Welcome to the Potion Shop!! What would you like to buy today? Pick "
      "Health, Mana, Special. You may exit with Quit.\n\n";
  std::string startingMessage =
      "Greetings traveler! Do you need to go on a quest for gold, or make a "
      "stop at the potion shop? Type: Quest, Shop, or Quit to exit.\n\n";

};

