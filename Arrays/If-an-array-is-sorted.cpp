#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    // Naive Method with time complexity: O(n^2)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             return false;
    //         }
    //     }
    // }
    // return true;

    // Efficient Method
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i-1])
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    int arr[] = {7, 2, 30, 10}, n = 4;
    // int arr[] = {10, 20, 30, 40}, n = 4;
    printf("%s", isSorted(arr, n)? "true": "false");
    return 0;
}