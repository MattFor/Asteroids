#define STRICT

#ifndef _PLAYER_H
#define _PLAYER_H

#pragma once

#include "Entity.h"

class Player : public Entity
{
public:
	using Entity::Entity;

	// Gameplay
	int lives = 3;

	Element::Spawnable to_spawn = Element::Spawnable::Unknown;

	// Movement
	void calc_move(float elapsed_time);

private:
	bool input(sf::Keyboard::Key);
};

#endif // !_PLAYER_H
