#pragma once

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class Traveler {

public:

 float getWalletAmount();
 sf::Sprite GetPlayerSprite();

protected:

  std::string PlayerTexturePath = "/home/mr_house/gamedev/PotionShop/assets/RPG Urban Pack/Tiles/tile_0024.png";
  sf::Texture PlayerTexture;
  sf::Sprite PlayerSprite;
  float HealthAmount = 75.f;
  float walletAmount = 100.f;
};
