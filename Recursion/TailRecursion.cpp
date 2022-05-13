#include<iostream>
using namespace std;

// void fun(int n, int k){
//     if (n == 0)
//         return;
//     cout << k << " ";
//     fun(n-1, k+1);      // Return factorial from n to 1
// }


int fun(int n, int k){
    if (n == 1 || n == 0)
        return k;
    return fun(n-1, k*n);   // Return product of number form n to 1
}

int main()
{
    // fun(3, 1);
    cout << fun(3, 1);      // Return factorial product of a number
    return 0;
}