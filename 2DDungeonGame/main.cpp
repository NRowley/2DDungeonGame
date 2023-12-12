#include <iostream>
#include <string>
#include "intro.h"
#include "puzzles.h"
#include "Character.h"
using namespace std;


void main() {
	string name;
	//hero stats
	int hp = 0;
	int str = 0;
	int def = 0;
	int agi = 0;
	bool charSetup = false;

	intro();


	while (!charSetup) {
		cout << "What type of character are you?\n";
		cout << "1 - Slayer\n2 - Adept\n3 - Espion\n";
		int choice;
		cin >> choice;

		if (choice == 1) {
			hp = 100;
			str = 5;
			def = 3;
			agi = 1;
			charSetup = true;
		}
		else if (choice == 2) {
			hp = 100;
			str = 3;
			def = 3;
			agi = 3;
			charSetup = true;
		}
		else if (choice == 3) {
			hp = 100;
			str = 3;
			def = 1;
			agi = 5;
			charSetup = true;
		}
		else {
			cout << "Invalid choice! Try again...\n";
		}
	}

	cout << "Stats\n";
	cout << "HP: " << hp << "\nSTR: " << str << "\nDEF: " << def << "\nAGI: " << agi << endl;

	cout << "The first gate is opening, counting down...\n";
	for (int i = 10; i >= 0; i--) {
		cout << i << endl;
	}

	cout << "In the first room stands a tall slender figure in a cloak.\nTotally skull faced. He speaks:\nI will ask you 3 questions with various punishments if you get them wrong...";
	int dmg = puzzle1() + puzzle2(str, agi) + puzzle3(name);

	hp = hp - dmg;

	cout << "You took " << dmg << " damage!\n " << "HP: " << hp << endl;

	Character testCharacter;
	testCharacter.setupStats(hp, str, def, agi);
	testCharacter.showStats();

	system("pause");
}