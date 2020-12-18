#pragma once
#include <SFML/Graphics.hpp>
#define MAX_ITEMS 3
class Pause
{
public:
	Pause(float width, float height);
	~Pause();
	void draw(sf::RenderWindow& window);
	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return selectedItemPause; }
private:
	int selectedItemPause = 0;
	sf::Font font;
	sf::Text pause[MAX_ITEMS];
};