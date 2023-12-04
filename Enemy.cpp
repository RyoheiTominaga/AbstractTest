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
	if (enemy._hp < 0) {
		enemy._hp = 0;
	}
	cout << "相手の残り体力"<< enemy._hp<<endl;
	cout << "＝＝＝＝＝＝ターン終了＝＝＝＝" << endl;

}