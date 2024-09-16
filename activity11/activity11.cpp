#include <iostream>

using namespace std;

int main()
{
	int input1, input2, largerNum;
	cout << "Input your first number : ";
	cin >> input1;
	cout << "Input your second number : ";
	cin >> input2;
	if (input1 > input2) {
		largerNum = input1;
		cout << largerNum << " is the larger number.";
		return 0;
	}
	else {
		largerNum = input2;
		cout << largerNum << " is the larger number.";
		return 0;
	}

}
