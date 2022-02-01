#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include "Game01/Game01.h"

int main()
{
    // Init Game Engine. 
    Game01 game01();

    // Loop. 
    while(game01.running())
    {
        // Event Polling. 
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if(sf::Keyboard::Escape)
                        window.close();
                    break;
            }
        }

        // Update. 

        // Render. 
        window.clear(sf::Color::Blue); // Clearing an old frame. 
        
        /* Draw your project here. */ 

        window.display(); // Tell the program that the window is successfully drawn. 
    }

    // End of the Program. 

    return 0;
}