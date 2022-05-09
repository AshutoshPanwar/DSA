#include<iostream>
using namespace std;

// Naive Method
// int findOdd(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }

//         if (count % 2 != 0)
//         {
//             return arr[i];
//         }
//     }
// }


// Efficient Code
int findOdd(int arr[], int n){
    int res=0;
    for (int i = 0; i < n; i++)
    {
        res ^= arr[i];
    }
    return res;
}

int main()
{
    int arr[]= {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;
    cout<<findOdd(arr, n);
    return 0;
}