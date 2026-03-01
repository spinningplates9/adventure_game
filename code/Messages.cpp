#include "Messages.h"


Messages::Messages() {}

std::string Messages::GetUserInput()
{
  return userInput;
}

std::string Messages::WelcomeMessage()
{
  return startingMessage;
}

std::string Messages::ShopGreeting()
{
  return shopGreet;
}

std::string Messages::OneLineSkip()
{
  return skip;
}

std::string Messages::TwoLineSkip()
{
  std::string twoSkip = skip + skip;
  return twoSkip;
}


