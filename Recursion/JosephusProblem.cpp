#include<iostream>
using namespace std;

int myJos(int n ,int k){
    if (n == 1)
    {
        return 0;
    }else{
        return (myJos(n-1, k) + k ) % n;
    }
    
}

int main()
{
    cout<<myJos(8, 2);
    return 0;
}