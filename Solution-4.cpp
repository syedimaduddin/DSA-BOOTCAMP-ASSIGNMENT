// Q4- Write a program to display Fibonacci Series upto nth term. (Using loops) ?

#include <iostream>
using namespace std;

int main()
{
    int n, sum=0, a=0, b=1;

    cout << "Enter the value of n : ";
    cin >> n;

    cout<<"Fibonacci Series upto "<<n<<" term : ";
    for(int i=0; i<n; i++)
    {
        cout<<sum<<", ";
        a = b; 
        b = sum;
        sum = a + b; 
    }

    return 0;
}