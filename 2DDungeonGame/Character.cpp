#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

Character::Character() {};

Character::~Character() {};


void Character::setupStats(int _hp, int _str, int _def, int _agi) {
	hp = _hp;
	maxHp = _hp;
	str = _str;
	def = _def;
	agi = _agi;
};

void Character::showStats() {
	cout << "HP: " << hp << "/mpMax" << maxHp << "\nSTR: " << str << "\nDEF: " << def << "\nAGI: " << agi << endl;
};
