#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	string nameList[3];
	for (int i = 0; i < 3; i++) {
		cout << "Input name #" << 1 + i << " : ";
		getline(cin,name);
		nameList[i] = name;
	}
	cout << "First name in list : " << nameList[0];
}
