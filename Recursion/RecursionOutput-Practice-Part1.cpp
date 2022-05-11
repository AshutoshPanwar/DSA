#include<iostream>
using namespace std;

// Guess the Output or the following program
void fun(int n){
    if (n == 0)
    {
        return;
    }
    fun(n-1);           // First this part execute will it become 0
    cout << n << endl;  // Then this one 
    fun(n-1);           // Then this
    
}

int main()
{
    fun(3);
    return 0;
}