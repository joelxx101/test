#include <iostream>
#include <string>

using namespace std;
int main()
{
	string drink{};

	cout << endl << "Hey what kind of drink do you want, Coffee or tea?" << endl;
	cin >> drink;

	if (drink == "coffee") {
		return true;
	}
	else if (drink == "tea") {
		return false;
	}