#include<iostream>
using namespace std;

// CPP program to check if k-th bit
// of a given number is set or not
// using left shift operator
// void isKthBitSet(int x, int k){
//     if (x & (1 << (k-1) != 0))
//     {
//         cout << "Set!";
//     }else{
//         cout << "Not Set!";
//     }
// }



// CPP program to check if k-th bit
// of a given number is set or not using
// right shift operator.
void isKthBitSet(int x, int k){
    if ((x >> (k-1) & 1) == 1)
    {
        cout << "Set!";
    }else{
        cout << "Not Set!";
    }
}

int main()
{
    int x = 5, k = 1;
    isKthBitSet(x, k);
    return 0;
}