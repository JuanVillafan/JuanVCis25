#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int random,guess;
	int maxNum = 100, minNum = 1;
	srand(time(0));
	random = rand() % ((maxNum - minNum + 1) + minNum);

	cout << "Guess the number between 1 and 100 : ";
	cin >> guess;
	while (guess != random) {
		cout << "WRONG, Guess again : ";
		cin >> guess;
	}
	cout << "You win! The number was : " << guess;

}
