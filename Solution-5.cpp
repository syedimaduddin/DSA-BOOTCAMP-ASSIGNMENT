// Q5- Write a program to check whether a number is Prime or Not ?

#include<iostream>
using namespace std;

int main()
{
    int num, half=0, flag=0;

    cout<<"Enter a number to check whether it is prime or not : ";
    cin>>num;

    half=num/2;

    for(int i=2; i<=half; i++)
    {
        if(num%i==0)
        {
            cout<<num<<" is not a prime number."<<endl;
            flag = 1;
            break;
        }
    }
    
    if(flag==0)
    {
        cout<<num<<" is a prime number."<<endl;
    }

    return 0;
}