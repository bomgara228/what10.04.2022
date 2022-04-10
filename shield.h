#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"


class Shield {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Shield();
	void update();
	void update();
	void draw(sf::RenderWindow&);
};