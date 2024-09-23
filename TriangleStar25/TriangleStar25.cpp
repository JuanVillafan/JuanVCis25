#include <iostream>

using namespace std;

int main()
{
	int row;
	cout << "Pick The amount of rows for your triangle : ";
	cin >> row;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

}

