#pragma once
#include "Enemy.h"

class Zombi:
	public Enemy
{
public:
	 Zombi();
     virtual void attack(Enemy& enemy) override;
     virtual void playBase(Enemy& enemy)override;
};