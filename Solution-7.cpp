// Q7- Write a program that takes n elements from the user and displays the second largest element of an array ?

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter value of element-"<<i+1<<" : ";
        cin>>arr[i];
    }

    sort(arr, arr+n);

    cout<<"Second Largest Element of the array is : "<<arr[n-2];

    return 0;
}