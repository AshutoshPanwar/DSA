#include<iostream>
using namespace std;

// ITERATIVE METHOD

// int fact(int n)
// {
//     int fac = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fac *= i;    // Multiplying each num till n
//     }
//     return fac;
// }


// RECURSIVE METHOD

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    return n * fact(n-1);   // Recursive calling function with a value decrement
}



int main()
{
    int number = 5;
    cout<<fact(number);
    return 0;
}