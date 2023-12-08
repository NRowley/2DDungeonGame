#include <iostream>
#include <string>
using namespace std;

void main() {
	string name;
	int age;
	int favNum;


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



	system("pause");
}