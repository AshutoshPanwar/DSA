#include<iostream>
using namespace std;

void fun1(int n)
{
    if (n == 0)     // Base Condition
    {
        return;
    }
    cout << "Hi" << endl;
    fun1(n-1);
}

int main()
{
    fun1(2);        // Function Calling
    return 0;
}