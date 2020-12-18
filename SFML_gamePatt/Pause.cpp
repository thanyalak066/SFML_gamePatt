#include "Pause.h"
Pause::Pause(float width, float height)
{
	if (!font.loadFromFile("font/font.ttf"))
	{
	}
	pause[0].setFont(font);
	//menu[0].setCharacterSize(70);
	pause[0].setFillColor(sf::Color::Red);
	pause[0].setString("Resume");
	pause[0].setOrigin(pause[0].getLocalBounds().width / 2, pause[0].getLocalBounds().height / 2);
	pause[0].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEMS + 1) * 1));

	pause[1].setFont(font);
	//menu[1].setFillColor(sf::Color::Red);
	pause[1].setString("Leaderboard");
	pause[1].setOrigin(pause[1].getLocalBounds().width / 2, pause[1].getLocalBounds().height / 2);
	pause[1].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEMS + 1) * 2));

	pause[2].setFont(font);
	//menu[2].setFillColor(sf::Color::Red);
	pause[2].setString("Exit");
	pause[2].setOrigin(pause[2].getLocalBounds().width / 2, pause[2].getLocalBounds().height / 2);
	pause[2].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEMS + 1) * 3));


}
Pause::~Pause()
{

}
void Pause::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		window.draw(pause[i]);
	}
}
void Pause::MoveUp()
{
	if (selectedItemPause - 1 >= 0)
	{
		pause[selectedItemPause].setFillColor(sf::Color::White);
		selectedItemPause--;
		pause[selectedItemPause].setFillColor(sf::Color::Red);
	}

}
void Pause::MoveDown()
{
	if (selectedItemPause + 1 < MAX_ITEMS)
	{
		pause[selectedItemPause].setFillColor(sf::Color::White);
		selectedItemPause++;
		pause[selectedItemPause].setFillColor(sf::Color::Magenta);
	}

}