#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Enter a positive number : ";
	cin >> number;
	while (number < 0) {
		cout << "Make sure your number is positive : ";
		cin >> number;
	}
	int factorial = 1;
	for (int i = 0; i < number; i++) {
		factorial = factorial * (i + 1);
	}
	cout << "The factorial of " << number << " is equal to : " << factorial;

}
