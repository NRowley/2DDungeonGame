#pragma once
class Character
{
private:
	//attributes
	int hp, maxHp, str, def, agi;
public:
	Character();
	~Character();

	void setupStats(int _hp, int _str, int _def, int _agi);
	void showStats();
};

