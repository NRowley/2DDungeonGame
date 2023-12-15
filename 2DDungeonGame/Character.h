#pragma once


class Character
{
protected:
	//attributes
	int hp, maxHp, str, def, agi;
public:
	Character();
	~Character();

	void setupStats(int _hp, int _str, int _def, int _agi);
	void showStats();

	int getHP();
	int getMaxHP();
	int getAGI();

	int getDamage();
	void takeDamage(int dmg);

	string getName();
};

