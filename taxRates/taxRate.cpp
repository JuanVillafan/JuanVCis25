#include <iostream>

using namespace std;

int main() {
	double earnings = 95000;
	double stateDeduct, countyDeduct, taxedEarnings, totalDeduct;

	stateDeduct = earnings * 0.04;
	countyDeduct = earnings * 0.02;
	totalDeduct = stateDeduct + countyDeduct;
	taxedEarnings = earnings - totalDeduct;

	cout << "With an earning of 95000, you pay a state tax of : " << stateDeduct << endl;

	cout << "With an earning of 95000, you pay a county tax of : " << countyDeduct << endl;

	cout << "All together you pay a total of :" << totalDeduct << endl;

	cout << "After subtracting your taxes, you are left with : " << taxedEarnings << endl;

	return 0;



}