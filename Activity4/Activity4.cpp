#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << left << setw(10) << "Course" << "|" << setw(10) <<right <<"Student" << endl;
	cout << "---------------------" << endl;
	cout << left << setw(10) << "C++" << "|" << right<<setw(10) << 100 << endl;
	cout << left << setw(10) << "JavaScript" <<"|" << right<<setw(10) << 50 << endl;
}

/*
Output:

Course    |   Student
---------------------
C++       |       100
JavaScript|        50

C:\CIS 06-Juan\Activity4\x64\Debug\Activity4.exe (process 16272) exited with code 0.
Press any key to close this window . . .


*/