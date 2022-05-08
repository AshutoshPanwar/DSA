#include<iostream>
using namespace std;
int main()
{
    // x = 5(00000101) and y = 9(00001001)
    int x = 5, y = 9;


    // The result is 00000001
    cout << "x & y = " << (x & y) << endl;      // And Operator

    // The result is 00001101
    cout << "x | y = " << (x | y) << endl;      // Or Operator

    // The result is 00001100
    cout << "x ^ y = " << (x ^ y) << endl;      // Xor operator

    // The result is 11111010
    cout << "~x = " << (~x) << endl;            // Not operator

    // The result is 00010010
    cout << "y << 1 = " << (y << 1) << endl;    // Left Shift Operator

    // The result is 00000100
    cout << "y >> 1 = " << (y >> 1) << endl;    // Right Shift Operator
    
    return 0;
}