#include <iostream>
#include "Goblin.h"

using namespace std;

void Goblin::attack(Enemy& enemy)
{
	enemy.damage(3);
}

void Goblin::playBase(Enemy& enemy)
{

	// A -> B‚ÖUŒ‚
	cout << "ƒSƒuƒŠƒ“UŒ‚I" << endl;
	attack(enemy);

	// ƒ‰ƒ“ƒ_ƒ€‚Å‚Q‰ñUŒ‚
	cout << "ƒSƒuƒŠƒ“‚Ì‚Q‰ñUŒ‚I" << endl;
	attack(enemy);
	attack(enemy);

}
