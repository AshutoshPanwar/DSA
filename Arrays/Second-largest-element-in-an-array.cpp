#include<iostream>
using namespace std;

// int getLarges(int arr[], int n){
//     int res = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > arr[res])
//         {
//             res = i;
//         }
//     }
//     return res;
// }

int secondlargest(int arr[], int n)
{
    // Naive approch
    // int largest = getLarges(arr, n);    // Function calling
    // int res = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != arr[largest])
    //     {
    //         if (res == -1)
    //         {
    //             res = i;
    //         }
    //         else if (arr[i] > arr[res])
    //         {
    //             res = i;
    //         }
    //     }
    // }
    // return res;

    // Efficient solution
    int res = -1, largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = { 5, 8, 20, 10};
    cout << secondlargest(arr, 4);
    return 0;
}