
#include <iostream>

using namespace std;
int main()
{
    
    /* There are Two solutions to fix :
        
        int x = 10;

        int y = 3;

        double z = x / y;

        cout << z;

        return 0;
    */

    //solution 1, change int to double: 
    cout << "Solution 1 : " << endl;
    double x1 = 10;

    double y1 = 3;

    double z1 = x1 / y1;

    cout <<"z1 = "<< z1;

    //solution 2, use static :
    cout << endl << "Solution 2 : " << endl;
    int x2 = 10;

    int y2 = 3;

    double z2 = static_cast<double>(x2) / static_cast<double>(y2);

    cout << "z2 = " << z2;
}
