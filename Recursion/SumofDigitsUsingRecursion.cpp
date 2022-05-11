#include<iostream>
using namespace std;

int fun(int n){
    if (n <= 9)
    {
        return n;
    }
    return fun(n/10) + n%10;    // n/10 -> Removes the last digit and n%10 -> gives the last digit
}

int main()
{
    cout<<fun(253);
    return 0;
}