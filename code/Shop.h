#include "Messages.h"


Messages messages;

struct Shop{
  float getItemPrice(std::string userInput) {
    if (messages.userInput == "Health" || messages.userInput == "health") {
      return 19.99f;
    } else if (messages.userInput == "Mana" || messages.userInput == "mana") {
      return 12.45f;
    } else if (messages.userInput == "Special" || messages.userInput == "special") {
      return 59.99f;
    }
  }

  float calculateTransaction(float price, float clientAmount) {
    float transactionTotal = clientAmount -= price;
    std::cout << "Your total is: " << transactionTotal << messages.twoLineSkip;

    return transactionTotal;
  }

  float shopTransaction(float clientAmount) {
    bool clientShopping = true;
    while (clientShopping) {

      messages.userInput;
      std::cout << messages.shopGreeting;
      std::cin >> messages.userInput;

      if (messages.userInput == "Quit" || messages.userInput == "quit") {
        std::cout << "Come again!\n\n";
        clientShopping = false;
      }

      float price = getItemPrice(messages.userInput);

      if (price > 0) {

        std::cout << "That will cost: " << price << messages.twoLineSkip;

        float transactionTotal = calculateTransaction(price, clientAmount);

        if (clientAmount < transactionTotal) {
          std::cout << "Looks like you ran out of dough. Now you gotta sweep the "
                       "floors.\n\n";
        }

        return transactionTotal;
      }
    }
  }
};

