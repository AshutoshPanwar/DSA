#include<iostream>
using namespace std;

int maxCuts(int n, int a, int b, int c){
    if (n == 0)
    {
        return 0;       // Return 0 is possibely divide rope is equal sets
    }
    if (n <= -1)
    {
        return -1;       // Return -1 to its parent element if ans goest in negative
    }
    int res = max(maxCuts( n-a,  a,  b,  c),
            max(maxCuts( n-b,  a,  b,  c),
            maxCuts( n-c,  a,  b,  c)));
    if (res == -1)
    {
        return -1;      // Not possible case
    }
    return res + 1;     
}

int main()
{
    int n = 5, a = 2, b = 1, c = 5;
	cout<<maxCuts(n, a, b, c);
    return 0;
}