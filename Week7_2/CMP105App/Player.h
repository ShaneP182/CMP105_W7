#pragma once

#include "Framework/GameObject.h"
#include "Bullet.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void update(float dt);
	void handleInput(float dt);
	Bullet* getBullet() {
		return &bullet;
	};

private:
	Bullet bullet;
};