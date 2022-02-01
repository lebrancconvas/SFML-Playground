#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>

int main()
{
    // Init. 
    std::string Title = "SFML Playground";
    sf::RenderWindow window(sf::VideoMode(1920, 1200), Title, sf::Style::Titlebar | sf::Style::Close);
    
    sf::Event event;

    // Loop. 
    while(window.isOpen())
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
        window.clear(sf::Color::Blue); 
        
        /* Draw your project here. */ 

        window.display();
    }

    // End of the Program. 

    return 0;
}