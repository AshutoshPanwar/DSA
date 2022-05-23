#include<iostream>
using namespace std;

int getLarges(int arr[], int n){
    // Time Comlexity: O(n^2)
    // for (int i = 0; i < n; i++)
    // {
    //     bool flag = true;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[j]>arr[i])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if (flag == true)
    //     {
    //         return i;
    //     }
    // }
    // return -1;


    // Time Comlexity: O(n)
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = { 5, 8, 20, 10};
    cout << getLarges(arr, 4);
    return 0;
}