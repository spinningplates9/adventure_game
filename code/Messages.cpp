#include "Messages.h"


Messages::Messages() {}

std::string Messages::getUserInput()
{
  return userInput;
}

std::string Messages::welcomeMessage()
{
  return startingMessage;
}

std::string Messages::shopGreeting()
{
  return shopGreet;
}

std::string Messages::twoLineSkip()
{
  return skips;
}


