#pragma once
#include <iostream>
#include <string>
#include "Character.h"
using namespace std;

class Hero : public Character
{
private:
	string name;

public:
	Hero();
	~Hero();

	void setName(string s);
	string getName();


	void heal(int amount);
	void atkBoost(int amount);
	void defBoost(int amount);

};

