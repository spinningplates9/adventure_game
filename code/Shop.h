#pragma once

#include "Messages.h"


class Shop {
public:

  float getItemPrice(std::string resultingInput);

  float calculateTransaction(float price, float clientAmount);
  
  float shopTransaction(float clientAmount);

protected:

  std::string resultingInput = shopMessages.getUserInput();
  Messages shopMessages;
};

