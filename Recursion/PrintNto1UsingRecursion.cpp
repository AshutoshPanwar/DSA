#include<iostream>
using namespace std;

void printToN(int n){
    if (n == 0)         // Base Condition
    {
        return;
    }
    cout << n << " ";
    printToN(n-1);      // Recursively calling printToN
}

int main()
{
    int n = 4;
	printToN(n);
    return 0;
}