#include<iostream>
using namespace std;

// Euclidean Algorithm

// int gcd(int a, int b)
// {
//     while (a != b)
//     {
//         if(a > b){
//             a = a - b;
//         }else{
//             b = b - a;
//         }
//     }
//     return a;
// }





// Optimised Euclidean Algorithm

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }else{
        return gcd(b, a%b);     
    }
    
}


int main()
{
    int a = 12, b = 15;
    cout<<gcd(a, b);
    return 0;
}