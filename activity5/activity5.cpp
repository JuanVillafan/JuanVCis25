
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "The size of short is : " << sizeof(short) << endl;
	cout << "Max : " << numeric_limits<short>::max() << endl;
	cout <<"Min : " << numeric_limits<short>::min() << endl;

	cout << endl << "---------------------------------------" << endl;

	cout << endl << "The size of double is : " << sizeof(double) << endl;
	cout <<"Max : " << numeric_limits<double>::max() << endl;
	cout <<"Max : " << numeric_limits<double>::min() << endl;

}
