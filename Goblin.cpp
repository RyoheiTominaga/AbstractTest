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
	case 0:cout << "�S�u�����U���I" << endl;
		attack(enemy);break;


	case 1:cout << "�S�u�����̂Q��U���I" << endl;
		attack(enemy);
		attack(enemy);break;
	}
	// A -> B�֍U��
	

	// �����_���łQ��U��
	

}
