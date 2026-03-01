#include "Shop.h"
#include "Messages.h"

Messages shopMessages;


float Shop::getItemPrice(std::string resultingInput) {
    if (resultingInput == "Health" || resultingInput == "health") {
      return 19.99f;
    } 
    else if (resultingInput == "Mana" || resultingInput == "mana") {
      return 12.45f;
    } 
    else if (resultingInput == "Special" || resultingInput == "special") {
      return 59.99f;
    }
    else {
      return 0.0f;
    }
}

float Shop::calculateTransaction(float price, float clientAmount) {
  float transactionTotal = clientAmount -= price;
  std::cout << "Your total is: " << transactionTotal << shopMessages.TwoLineSkip();

  return transactionTotal;
}

void Shop::shopTransaction() {

  bool clientShopping = true;

  while (clientShopping) {

    std::cout << shopMessages.ShopGreeting();
    std::string ClientChoice = shopMessages.GetUserInput();
    std::cin >> ClientChoice;

    if (ClientChoice != "Quit" || ClientChoice != "quit") {
    
      float price = getItemPrice(ClientChoice); // then put this in either else if or else statement
                                                
        // create if statement for when the player reaches a certain amount of kills or XP
        //  then it has access to a special shop where more items are available for a higher
        //  price
        
      if (price > 0) {

        std::cout << "That will cost: " << price << shopMessages.TwoLineSkip();
        float transactionTotal = calculateTransaction(price, TravelerWallet.getWalletAmount());

        if (TravelerWallet.getWalletAmount() < transactionTotal) {
          std::cout << "Looks like you ran out of dough. Now you gotta sweep the "
                       "floors.\n\n";
        }
      }
    }
    else {
      std::cout << "Come again!\n\n";
      clientShopping = false;
    }
  }
}
