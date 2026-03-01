#pragma once

#include "Messages.h"
#include "Traveler.h"


class Shop {
public:

  float getItemPrice(std::string resultingInput);

  float calculateTransaction(float price, float clientAmount);
  
  void shopTransaction();

protected:

  Traveler TravelerWallet;

};

