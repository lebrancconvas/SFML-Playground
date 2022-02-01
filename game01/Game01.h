#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game01
{
	private:
		// Variables 

		// Window 
		sf::RenderWindow* window;
		sf::VideoMode videoMode;
		sf::Event event;

		// Private Function. 
		void initVariables();
		void initWindow();
	public: 
		// Constructor / Destructor 
		Game01();
		virtual ~Game01();

		// Accessors. 
		const bool running() const;

		// Functions 
		void update();
		void render();
};