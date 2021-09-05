// Q9- Grading Students Problem from HackerRank ?

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int grade[n];
    for(int i=0; i<n; i++)
    {
        cin>>grade[i];
    }
    
    for(int i=0; i<n; i++)
    {
        int x = grade[i];
        int rem = grade[i]%5;
        
        if(x>=38 && ((x+5)-rem)-x<3)
        {
            x = (x+5) - rem;
            cout<<x<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }

    return 0;
}