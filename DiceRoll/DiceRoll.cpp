#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int minValue = 1;
	int maxValue = 6;
	for (int i = 1; i <= 2; i++) {
		int dice = rand() % ((maxValue - minValue + 1) + minValue);
		cout << "Dice Roll #" << i << " : " << dice << endl;
	}
	return 0;
}