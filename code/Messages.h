#pragma once

#include <iostream>
#include <stdio.h>


class Messages {

public:
  Messages();
  std::string GetUserInput();
  std::string WelcomeMessage();  
  std::string ShopGreeting(); 
  std::string OneLineSkip();
  std::string TwoLineSkip(); 

protected:
  std::string userInput {};
  std::string skip = "\n";
  std::string startingMessage =
    "Greetings traveler! Do you need to go on a quest for gold, or make a stop at the potion shop? Type: Quest, Shop, or Quit to exit.\n\n";
  std::string shopGreet =
      "Welcome to the Potion Shop!! What would you like to buy today? Pick Health, Mana, Special. You may exit with Quit.\n\n";
};

