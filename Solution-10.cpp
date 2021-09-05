// Q10- CameCase Problem from HackerRank ?

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int len, count=0;
    
    len = s.length();

    for(int i=0; i<len; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            count++;
        }
    }
    
    count += 1;
    
    cout<<count;
    
    return 0;
}
