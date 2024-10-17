#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
	cout << "Your array looks like : " << endl << " [ ";

	for (int i = 0; i < size; i++) {
		cout << arr[i];

		if (i != size - 1)
			cout << ", ";

	}

	cout << " ]" << endl;
}
void sizeArray(int arr[], int size) {
	int* newArr = new int[size+1];
	arr = newArr;
	delete newArr;
}
/*int main()
{
	int total;
	cout << "Choose how many values you want to input : ";

	cin >> total;


	int* numArray = new int[total];

	int count=0;

	cout << "Fill your array : " << endl;
	int inputValue;
	for (int i = 0; i < total; i++) {

		cout << "Value #" << i + 1 << " : ";

		cin >> inputValue;

		numArray[i] = inputValue;


	}
	printArray(numArray, count+1);
	return 0;

}
*/
int main() {
	int total = 0;
	int input;

	int* dynArray = new int[1];
	while (sizeof(input)==sizeof(int)) {
		cout << "Input Value : ";
		cin >> input;
		if (cin.fail() == true)
			break;

		sizeArray(dynArray, total);
		dynArray[total] = input;
		total++;
	}
	printArray(dynArray, total);
}
