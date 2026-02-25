#include <iostream>

struct Messages {
  std::string userInput{};
  std::string welcomeMessage =
      "Greetings traveler! Do you need to go on a quest for gold, or make a "
      "stop at the potion shop? Type: Quest, Shop, or Quit to exit.\n\n";
  std::string shopGreeting =
      "Welcome to the Potion Shop!! What would you like to buy today? Pick "
      "Health, Mana, Special. You may exit with Quit.\n\n";
  std::string twoLineSkip = "\n\n";
};


