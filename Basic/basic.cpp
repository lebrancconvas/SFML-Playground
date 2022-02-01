#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main()
{
	std::string Title = "Basic Application";
	int windowWidth = 1920;
	int windowHeight = 1200;
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), Title, sf::Style::Titlebar | sf::Style::Close);
	sf::Event event;

	while(window.isOpen())
	{
		while(window.pollEvent(event))
		{
			switch(event.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
				case sf::Event::KeyPressed:
					if(sf::Keyboard::Escape)
					{
						window.close();
						break;
					}
			}
		}

		window.clear(sf::Color::Blue);
		window.display();
	}

	return 0;
}