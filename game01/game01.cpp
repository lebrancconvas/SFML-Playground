#include "Game01.h"

// Private Function. 
void Game01::initVariables()
{
	this->window = nullptr;
}

void Game01::initWindow()
{
	this->videoMode.width = 1920;
	this->videoMode.height = 1200;
	this->window = new sf::RenderWindow(this->videoMode, "The Return of Wong", sf::Style::Titlebar | sf::Style::Close);
}

// Constructor / Destructor. 
Game01::Game01()
{
	this->initVariables();
	this->initWindow();
}

Game01::~Game01()
{
	delete this->window;
}

// Accessors.
const bool Game01::running() const 
{
	return this->window->isOpen();
}


// Function. 
void Game01::update()
{
 
}

void Game01::render()
{

}