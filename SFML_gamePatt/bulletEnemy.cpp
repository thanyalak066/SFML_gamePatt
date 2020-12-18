#include "bulletEnemy.h"

bulletEnemy::bulletEnemy(sf::Texture* texture, float speed, sf::Vector2f pos, sf::Vector2f size)
{
	this->speed = speed;
	body.setSize(size);
	body.setOrigin(body.getSize() / 2.0f);
	body.setPosition(pos);
	body.setTexture(texture);
}

bulletEnemy::~bulletEnemy()
{
}

void bulletEnemy::draw(sf::RenderWindow& window)
{
	window.draw(body);
}

void bulletEnemy::onCollision(sf::Vector2f direction)
{
	if (direction.x < 0.0f)
	{
		velocity.x = 0.0f;
	}
	else if (direction.x > 0.0f)
	{
		velocity.x = 0.0f;
	}

	if (direction.y < 0.0f)
	{
		//collision on the bottom.
		velocity.y = 0.0f;
	}
	else if (direction.y > 0.0f)
	{
		//collision on the top.
		velocity.y = 0.0f;
	}
}

void bulletEnemy::setPosition(sf::Vector2f pos)
{
	body.setPosition(pos.x - 20.0f, pos.y - 20.0f);
}

void bulletEnemy::shootLeft(float deltaTime)
{
	velocity.y = 0;
	velocity.x = speed;

	body.move(-(velocity * deltaTime));
}