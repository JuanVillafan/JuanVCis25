#include <iostream>
#include <memory>
using namespace std;

void ptrResize(int ptr[], int total) {

}

int main()
{
	/*	unique_ptr<int> x(new int);
		*x = 5;
		cout << *x << endl;
		unique_ptr<int> y = make_unique<int>();
		auto z = make_unique<int>();

		auto numbers = make_unique<int[]>(*x);

		shared_ptr<int>x(new int);
	*/
	int size, input;

	cout << "Choose the size of your array(if you input anything that is not an integer, array size will be 10) : ";
	cin >> size;
	if (cin.fail())
		size = 10;
	auto dynArr = make_unique<int[]>(size);
	for (int i = 0; i < size; i++) {
		cout << "Choose Value #" << i + 1 << " : ";
		cin >> dynArr[i];
	}
	cout << "Your Array : " << endl;
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << dynArr[i];
		if (i != size - 1) {
			cout << ", ";
		}
	}
	cout << " ]" << endl;
	return 0;
}
