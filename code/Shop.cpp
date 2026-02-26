#include "Shop.h"



float Shop::getItemPrice(std::string resultingInput) {
    if (resultingInput == "Health" || resultingInput == "health") {
      return 19.99f;
    } else if (resultingInput == "Mana" || resultingInput == "mana") {
      return 12.45f;
    } else if (resultingInput == "Special" || resultingInput == "special") {
      return 59.99f;
    }
  }

  float Shop::calculateTransaction(float price, float clientAmount) {
    float transactionTotal = clientAmount -= price;
    std::cout << "Your total is: " << transactionTotal << shopMessages.twoLineSkip();

    return transactionTotal;
  }

  float Shop::shopTransaction(float clientAmount) {
    bool clientShopping = true;
    while (clientShopping) {

      shopMessages.getUserInput();
      std::cout << shopMessages.shopGreeting();

      if (shopMessages.getUserInput() == "Quit" || shopMessages.getUserInput() == "quit") {
        std::cout << "Come again!\n\n";
        clientShopping = false;
      }

      float price = getItemPrice(resultingInput);

      if (price > 0) {

        std::cout << "That will cost: " << price << shopMessages.twoLineSkip();

        float transactionTotal = calculateTransaction(price, clientAmount);

        if (clientAmount < transactionTotal) {
          std::cout << "Looks like you ran out of dough. Now you gotta sweep the "
                       "floors.\n\n";
        }

        return transactionTotal;
      }
    }
  }
