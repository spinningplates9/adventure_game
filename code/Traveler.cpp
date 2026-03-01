#include "Traveler.h"
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>

sf::Sprite Traveler::GetPlayerSprite()
{
  if (!PlayerTexture.loadFromFile(PlayerTexturePath, sf::IntRect(0,0,16,16)))
  {
    std::cout << "Player Texture could not load from file";
  }
  else 
  {
    PlayerTexture.loadFromFile(PlayerTexturePath, sf::IntRect(0,0,16,16));
  }
  PlayerSprite.setTexture(PlayerTexture);
  PlayerSprite.setPosition(10,10);

  return PlayerSprite;
}

float Traveler::getWalletAmount()
{
  return walletAmount;
}
