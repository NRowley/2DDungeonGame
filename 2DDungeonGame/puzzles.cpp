#include <iostream>
#include <string>
#include "puzzles.h"
using namespace std;

int puzzle1() {
	cout << "Puzzle 1! What is 7 + 2?\n";
	int num;
	cin >> num;
	if (num == 9) {
		cout << "CORRECT\n";
		return 0;
	}
	else {
		cout << "INCORRECT\n";
		return 9;
	}
}

int puzzle2(int x, int y) {
	cout << "Puzzle 2! What is " << x << " + " << y << "?\n";
	int num;
	cin >> num;
	if (num == x + y) {
		cout << "CORRECT\n";
		return 0;
	}
	else {
		cout << "INCORRECT\n";
		return 15;
	}
}

int puzzle3(string name) {
	cout << "Puzzle 3! What is your name?\n";
	string n;
	cin >> n;
	if (n == name) {
		cout << "CORRECT\n";
		return 0;
	}
	else {
		cout << "INCORRECT\n";
		return 25;
	}
}