
#include <iostream>

using namespace std;

int main()
{
    int num1 = 2;
    int num2 = 1;
    cout << "Original Value : " << endl;
    cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
    int placehold;
    placehold = num1;
    num1 = num2;
    num2 = placehold;
    cout << "Switched Values : " << endl;
    cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;

}
