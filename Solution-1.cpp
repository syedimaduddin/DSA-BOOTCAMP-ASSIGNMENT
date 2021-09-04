#include<iostream>
using namespace std;

int main()
{
    int first_num, second_num;
    cin>>first_num>>second_num;

    cout<<"Before Swap:"<<endl;
    cout<<"First No: "<<first_num<<" & ";
    cout<<"Second No: "<<second_num<<endl;

    swap(first_num,second_num);
    cout<<endl;

    cout<<"After Swap:"<<endl;
    cout<<"First No: "<<first_num<<" & ";
    cout<<"Second No: "<<second_num<<endl;

    return 0;
}