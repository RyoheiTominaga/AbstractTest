#include <iostream>
#include "Goblin.h"

using namespace std;

void Goblin::attack(Enemy& enemy)
{
	enemy.damage(3);
}

void Goblin::playBase(Enemy& enemy)
{

	// A -> B�֍U��
	cout << "�S�u�����U���I" << endl;
	attack(enemy);

	// �����_���łQ��U��
	cout << "�S�u�����̂Q��U���I" << endl;
	attack(enemy);
	attack(enemy);

}
