#include<iostream>
#include"Zombi.h"
Zombi::Zombi() {
	_hp = 10;
	_atk = 3;
}
void Zombi::attack(Enemy& enemy) {
	enemy.damage(_atk);
}
void Zombi::playBase(Enemy&enemy) {

}
