#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include "Shop.h"
#include "Messages.h"
#include "Quest.h"
#include "Traveler.h"



int main() {

  //Shop shop;
  //Quest quest;
  //Messages messages;
  
  sf::RenderWindow window({2556u, 1440u}, "Adventure Game", sf::Style::Default);
  
  Traveler traveler;
  sf::Sprite PlayerSprite = traveler.GetPlayerSprite();
  
  while (window.isOpen())
  {
      for (auto event = sf::Event(); window.pollEvent(event);)
      {
          if (event.type == sf::Event::Closed)
          {
            window.close();
          }
          if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Escape))
          {
            window.close();
          }
      }

      window.clear();
      window.draw(PlayerSprite);
      window.display();
  }
}
