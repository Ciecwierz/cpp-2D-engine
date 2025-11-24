#pragma once
#include <SFML/Graphics.hpp>

#define WIDTH 1920
#define HEIGHT 1080

namespace MySolution
{
	class mWindow : public sf::RenderWindow
	{
	public:
		mWindow() : sf::RenderWindow(sf::VideoMode({ WIDTH, HEIGHT }), L"SFML")
		{
			this->setPosition(sf::Vector2i(0, 0));
			this->setKeyRepeatEnabled(false);
			this->setVerticalSyncEnabled(true);
		}
	};
	
}


