#include<iostream>
using namespace std;

int reverse(int arr[], int n)
{
    int low = 0, high = n-1;
    while (low < high)          // Will true for both even and odd no of elements
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {10, 5, 7, 30}, n = 4;

    cout<<"Before Reverse"<<endl;

    for(int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }

    cout<<endl;

    reverse(arr, n);    // Function calling

    cout<<"After Reverse"<<endl;

    for(int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
    return 0;
}