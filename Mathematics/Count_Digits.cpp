#include<iostream>
using namespace std;

// Simple Function to count no of digits in a number
int CountDigit(int num)
{
    int terms=0;
    while (num != 0)
    {
        num = num/10;   // Removing each digit form right
        terms++;        // Increment value for each pop
    }
    return terms;
}



int main()
{
    int num = 2342;
    cout << CountDigit(num);
    return 0;
}   