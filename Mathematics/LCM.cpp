#include<iostream>
using namespace std;

// Function to Find GCD
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }else{
        return gcd(b, a%b);     
    }
    
}



// Function to find LCM using HCF
int lcm(int a, int b)
{
    return (a*b) / gcd(a , b);      // Calling gcd function
}



int main()
{
    int a = 4, b = 6;
    cout<<lcm(a, b);
    return 0;
}