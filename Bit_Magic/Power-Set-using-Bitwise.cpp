#include<iostream>
#include <cmath>
using namespace std;

void printPowerSet(string str){
    int n = str.length();
    int PowSize = pow(2,n);

    for (int i = 0; i < PowSize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
}


int main()
{
    string s = "abc";

    printPowerSet(s);
    return 0;
}