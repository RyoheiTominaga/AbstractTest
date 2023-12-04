#include <iostream>
#include "Enemy.h"

using namespace std;

void Enemy::damage(int damage)
{
	_hp -= damage;
}

void Enemy::play(Enemy& enemy)
{

	cout << "＝＝＝＝＝＝ターン開始＝＝＝＝" << endl;

	playBase(enemy);

	cout << "＝＝＝＝＝＝ターン終了＝＝＝＝" << endl;

}