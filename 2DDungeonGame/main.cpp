#include <iostream>
#include <string>
using namespace std;

void main() {
	string name;
	int age;

	cout << "Hello world!" << endl;
	cout << "What is you name?" << endl;
	cin >> name;

	cout << "Welcome to the dungeon " << name << "!" << endl;
	cout << "How old are you?\n";
	cin >> age;
	cout << "So you are " << age << " years old!\n";

	system("pause");
}