#include <iostream>
#include "Shop.h"
#include "Messages.h"


Shop shop;

struct Traveler {
  float walletAmount = 100.f;
};
Traveler traveler;

void travelersQuest() {
  /*
   * Needs a randomizer for gold value amounts
   * Each quest give a different range of values that are randomized.
   * Enemies and Traveler's stats
   *
   */

  bool questOngoing = true;
  while (questOngoing) {
  }
}


int main() {

  bool isRunning = true;

  while (isRunning) {
    // float clientDisposable = walletAmount;

    messages.userInput;
    std::cout << messages.welcomeMessage;
    std::cin >> messages.userInput;
    std::cout << messages.twoLineSkip;

    if (messages.userInput == "Quit" || messages.userInput == "quit") {
      isRunning = false;
    } 
    else if (messages.userInput == "Shop" || messages.userInput == "shop") {

      shop.shopTransaction(traveler.walletAmount);
    } 
    else if (messages.userInput == "Quest" || messages.userInput == "quest") {
      travelersQuest();
    }
  }
}
