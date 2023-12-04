#include<iostream>
#include"Character.h"

Character::Character() {
	_hp = 10;
	_atk = 3;
}
void Character::attack(Enemy& enemy) {
	enemy.damage(_atk);
}
void Character::playBase(Enemy&enemy) {

}
