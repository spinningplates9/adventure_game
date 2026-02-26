#include "Shop.h"
#include "Messages.h"


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

  Shop shop;
  Messages messages;

  while (isRunning) {
    // float clientDisposable = walletAmount;

    messages.welcomeMessage();
    std::string resultingInput = messages.getUserInput();
    messages.twoLineSkip();

    if (resultingInput == "Quit" || resultingInput == "quit") {
      isRunning = false;
    } 
    else if (resultingInput == "Shop" || resultingInput == "shop") {

      shop.shopTransaction(traveler.walletAmount);
    } 
    else if (resultingInput == "Quest" || resultingInput == "quest") {
      travelersQuest();
    }
  }
}
