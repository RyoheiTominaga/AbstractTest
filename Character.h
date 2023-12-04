#pragma once
#include "Enemy.h"

class Character:
	public Enemy
{
public:
	 Character();
     virtual void attack(Enemy& enemy) override;
     virtual void playBase(Enemy& enemy)override;
};