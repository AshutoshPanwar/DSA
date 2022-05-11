#include<iostream>
using namespace std;

// // Guess the OutPut
// int fun(int n){
//     if (n == 1)         // Base Condition
//     {
//         return 0;
//     }
//     return 1+fun(n/2);
// }


// Binary Conversion of a number using recursion
void fun(int n){
    if (n == 0)
    {
        return;
    }
    fun(n/2);
    cout << (n%2) << endl;
}

int main()
{
    // cout<<fun(16);
    fun(7);
    return 0;
}