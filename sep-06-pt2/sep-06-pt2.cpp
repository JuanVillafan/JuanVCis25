#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//only uses a for loop, solves for average, but does not save the temperatures in an array: 
	double average = 0, temperature;
	int	amount;
	cout << "How many temperatures will you be entering? : ";
	cin >> amount;
	while (amount <= 0) {
		cout << "You need at least 1 temperature, and no negatives : ";
		cin >> amount;
	}
	for (int i = 0; i < amount; i++) {
		cout << "Enter temperature #" << i + 1 << " : ";
		cin >> temperature;
		average = average + temperature;
	}
	cout << "The average of your temperatures is " << average / static_cast<double>(amount) << endl;


//pointer  process, create a list that will save itself into an array, and find the average: 
	cout << endl << "_____POINTER SOLUTION______" << endl << endl;
    double* temperature2;
	int numberTemp;
	double average2 = 0;
	cout << "How many temperatures will you be entering? : ";
	cin >> numberTemp;
	while (numberTemp <= 0) {
		cout << "You need at least 1 temperature, and no negatives : ";
		cin >> numberTemp;
	}
	temperature2 = new double[numberTemp];
	for (int i = 0; i < numberTemp;i++) {
		cout << "Enter temperature #" << i + 1 << " : ";
		cin >> temperature2[i];
		average2 = average2 + temperature2[i];
	}
	cout << "The average of your temperatures is " << average2 / static_cast<double>(numberTemp);
	cout << endl << "Your list of temperatures is : ";
	for (int i = 0; i < numberTemp;i++) {
		cout << temperature2[i];
		if (i != numberTemp - 1) {
			cout << ", ";
		}
	}

}