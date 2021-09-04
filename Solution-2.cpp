// Q2- Write a program to find the largest number among three numbers entered by the user ?

#include<iostream>
using namespace std;

int main()
{
    int first_num, second_num, third_num;

    cout<<"Enter three numbers : "<<endl;
    cin>>first_num>>second_num>>third_num;

    int max;
    
    max = max>first_num?max:first_num;
    max = max>second_num?max:second_num;
    max = max>third_num?max:third_num;

    cout<<"Largest Number among three numbers is : "<<max<<endl;

    return 0;
}