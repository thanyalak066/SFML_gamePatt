#pragma once
#include <SFML/Graphics.hpp>

class bulletEnemy
{
public:
	bulletEnemy(sf::Texture* texture, float speed, sf::Vector2f pos, sf::Vector2f size);
	~bulletEnemy();
	void draw(sf::RenderWindow& window);
	void onCollision(sf::Vector2f direction);
	void setPosition(sf::Vector2f pos);
	void shootLeft(float deltaTime);

private:
	sf::RectangleShape body;
	sf::Vector2f velocity;

	float speed;
};
