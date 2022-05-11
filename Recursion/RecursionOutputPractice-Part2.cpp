#include<iostream>
using namespace std;

// Guess the OutPut
int fun(int n){
    if (n == 1)         // Base Condition
    {
        return 0;
    }
    return 1+fun(n/2);
}

int main()
{
    cout<<fun(16);
    return 0;
}