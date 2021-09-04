// Q6- Print this pattern using loops
//           For n=5
//            	    *    
//           	   * *
//            	  * * *
//           	 * * * *
//           	* * * * *

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            cout<<" ";
        }
        
        for(int k=0; k<i+1; k++)
        {
            cout<<"* ";
        }

        for(int l=0; l<n-2-i; l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}