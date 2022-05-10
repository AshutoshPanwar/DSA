#include<iostream>
using namespace std;

// Function to check if a number is palindrom or not..
bool isPal(int num)
{
    int x = num, rev=0;

    while (x != 0)
    {
        int ld = x % 10;        // Finding last digit
        rev = rev * 10 + ld;    // Revercing number
        x = x / 10;             // removing last digit

    }
    
    return rev==num;
}


int main()
{
    int number = 4553;
    cout<<isPal(number);    // if true return 1: else return 0
    return 0;
}