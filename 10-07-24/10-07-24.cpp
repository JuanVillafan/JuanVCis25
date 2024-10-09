#include <iostream>
#include "10-07-24H.h"

using namespace std;

int main() {
	int num1, num2;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	cout << "Pick two numbers :" << endl << "First Number = ";
	cin >> num1;
	cout << "Second number = ";
	cin >> num2;

	cout << "Original Numbers :" << endl;
	cout << "Number1 : " << num1 << endl << "Number2 : " << num2 << endl;

	swap::swapfunction(*ptr1, *ptr2);
	cout << endl << "Swapped Numbers :" << endl;
	cout << "Number1 : " << num1 << endl << "Number2 : " << num2 << endl;

}

//swap function