#include <iostream>
#include "Goblin.h"

using namespace std;

void Goblin::attack(Enemy& enemy)
{
	enemy.damage(3);
}

void Goblin::playBase(Enemy& enemy)
{

	srand((int)time(NULL));
	int attackNum = rand() % 2;


	switch (attackNum)
	{
	case 0:cout << "ƒSƒuƒŠƒ“UŒ‚I" << endl;
		attack(enemy);break;


	case 1:cout << "ƒSƒuƒŠƒ“‚Ì‚Q‰ñUŒ‚I" << endl;
		attack(enemy);
		attack(enemy);break;
	}
	// A -> B‚ÖUŒ‚
	

	// ƒ‰ƒ“ƒ_ƒ€‚Å‚Q‰ñUŒ‚
	

}
