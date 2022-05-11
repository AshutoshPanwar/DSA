#include<iostream>
using namespace std;

int fib(int n){
    if (n <= 1)         // Base Condition when n is 0 or 1
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n = 9;
    cout << fib(n);
    return 0;
}