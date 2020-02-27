#pragma once

#include "Framework/GameObject.h"
#include "Player.h"

class Player;

class Companion : public GameObject
{
public:
	Companion();
	~Companion();

	void update(float dt);
	void moveToPlayer(Player* player);

private:

};