#include<iostream>
using namespace std;

void ToH(int n, char a, char b, char c){
    if (n == 1)
    {
        cout << "Move 1 from " << a << " to " << c << endl;
        return;
    }
    ToH(n-1, a, c, b);
    cout << "Move " << n << " from " << a << " to " << c << endl;
    ToH(n-1,b,a,c);
}

int main()
{
    int n = 2; 
    ToH(n, 'A', 'B', 'C');
    return 0;
}