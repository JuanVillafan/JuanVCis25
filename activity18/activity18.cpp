#include <iostream>

using namespace std;




void printArray(int arr[], int size) {
	cout << " [ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i];
		if (i != size - 1) {
			cout << ", ";
		}
	}
	cout << " ]"<<endl;
}

void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {

			if (arr[j] > arr[j + 1]) {

				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}

	}
}


int main() {
	const int size = 17;
	int arr[size] = {27,12,0,72,16,15,21,48,100,7,107,99,15,48,10,9,2};

	cout << "Original Array : " << endl;

	printArray(arr, size);

	bubbleSort(arr, size);
	cout << "Sorted Array : " << endl;
	printArray(arr, size);
}