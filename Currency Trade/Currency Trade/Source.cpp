#include <iostream>
#include <string>
using namespace std;

int main()
{
	int americanCurrency;
	int britishPound;
	int mexicanPeso;
	int japaneseYen;

	cout << "How much USD are you converting?";
	cin >> americanCurrency;

	britishPound = americanCurrency * .6318;
	mexicanPeso = americanCurrency * 12.8863;
	japaneseYen = americanCurrency * 82.34;

	cout << americanCurrency << " USD is converted to " << britishPound << " British Pounds, " << mexicanPeso << " Mexican Peso's, and " << japaneseYen << " Japanese Yen." << endl;

	system("pause");

	return 0;
}