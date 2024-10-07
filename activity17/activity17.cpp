#include <iostream>


using namespace std;

const int x = 15;

int linearSearch(int arr[],int value) {
	for (int i = 0; i < x; i++) {
		if (arr[i] == value) {
			return i;
		}
		while (i == x - 1) {
			if (arr[i] != value) {
				return -1;
			}
		}
	}

}

int main() {

	int value;
	int arr[x] = { 21,12,27,15,7,18,19,84,100,22,20,92,4,77,43 };
	cout << "This is a number searcher. If your value is in the predetermined array, it will return the value that you were " << endl;

	cout << "searching for, and its location in the array." << endl << "If not, it will return -1" << endl << endl;
	
	cout << "Which number would you like to search for : ";
	
	cin >> value;
	
	cout<<linearSearch(arr,value);
	return linearSearch(arr,value);
}
