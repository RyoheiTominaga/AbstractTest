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
	if (enemy._hp < 0) {
		enemy._hp = 0;
	}
	cout << "����̎c��̗�"<< enemy._hp<<endl;
	cout << "�������������^�[���I����������" << endl;

}