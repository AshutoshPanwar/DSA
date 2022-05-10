#include<iostream>
using namespace std;

// Simple Method
// int countSetBits(int i){
//     int result=0;
//     while (i > 0)
//     {
//         result += (i & 1);
//         i >>= 1;
//     }
//     return result;
// }



// Brian and Kerningham Algorithm
// int countSetBits(int i){
//     int result=0;
//     while (i > 0)
//     {
//         i &= (i-1);
//         ++result;
//     }
//     return result;
// }



// Lookup Table
int table[256];
	void initialize() {

    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
	}
	int countSetBits(int n)
	{
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}


int main()
{
    initialize();       // Only for Lookup Table
    int i = 9;
    cout << countSetBits(i);
    return 0;
}