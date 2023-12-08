#include <iostream>
#include <string>
using namespace std;

void main() {
	string name;
	int age;
	int favNum;
	//hero stats
	int hp = 0;
	int str = 0;
	int def = 0;
	int agi = 0;
	bool charSetup = false;


	cout << "Hello world!" << endl;
	cout << "What is you name?" << endl;
	cin >> name;

	cout << "Welcome to the dungeon " << name << "!" << endl;
	cout << "How old are you?\n";
	cin >> age;
	cout << "So you are " << age << " years old!\n";

	cout << "What is you favorite number?\n";
	cin >> favNum;
	cout << "Well you are now stuck in this dungeon for " << favNum << " years!\n";

	int newAge = age + favNum;
	cout << "It's time to escape before you turn " << newAge << " years old!\n";

	if (newAge >= 80) {
		cout << "You might not even live to this age!\n";
	}


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

	system("pause");
}