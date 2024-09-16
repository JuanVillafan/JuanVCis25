#include <iostream>
#include <string>
using namespace std;
int main()
{
	string street, city, state, zipCode;

	cout << "Which State are you from : ";
	getline(cin, state);

	cout << "Which city are you from : ";
	getline(cin, city);

	cout << "What is your zipcode : ";
	getline(cin, zipCode);

	cout << "What is your street : ";
	getline(cin, street);

	cout << "Adresses : " << endl;
	cout << street << endl;
	cout << city << ", " << state << ", " << zipCode;
}
