#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double salesTotal;
	double commission;

	cout << "How much money did you make from sales? : $";
	cin >> salesTotal;
	
	if (salesTotal <= 10000)
		commission = salesTotal * 0.10;
	else if (salesTotal <= 15000)
		commission = salesTotal * 0.15;
	else
		commission = salesTotal * 0.20;
	cout << "You earned $" <<commission << " in commissions!";
}
