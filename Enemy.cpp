#include <iostream>
#include "Enemy.h"

using namespace std;

void Enemy::damage(int damage)
{
	_hp -= damage;
}

void Enemy::play(Enemy& enemy)
{

	cout << "�������������^�[���J�n��������" << endl;

	playBase(enemy);

	cout << "�������������^�[���I����������" << endl;

}