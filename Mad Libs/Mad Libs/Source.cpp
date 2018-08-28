#include <string>
#include <iostream>
using namespace std;

int main()
{
	string colorDragon;
	string estWord;
	string bodyParts;
	string animal;
	string noun;
	string pluralNoun;

	int a;
	int b;
	int c;

	cout << "Name a color ";
	cin >> colorDragon;

	cout << "Name a word that ends in est ";
	cin >> estWord;

	cout << "Name a plural body part ";
	cin >> bodyParts;

	cout << "Name an animal ";
	cin >> animal;

	cout << "Name a noun ";
	cin >> noun;

	cout << "Name a plural noun ";
	cin >> pluralNoun;

	cout << "Choose a number ";
	cin >> a;

	cout << "Choose another number ";
	cin >> b;

	c = a - b;

	cout << "The " << colorDragon << " Dragon is the " << estWord << " Dragon of all. It has " << c << " " << bodyParts << ", and a " << animal << " shaped like a " << noun << ". It loves to eat " << pluralNoun << ", although it will feast on nearly anything.";

	system("pause");

	return 0;
}
