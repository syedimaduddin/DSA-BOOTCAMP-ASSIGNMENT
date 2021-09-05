// Q8- Left Rotation Array Problem on HackerRank ?

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int array_size, left_rotation;
    cin>>array_size;
    cin>>left_rotation;
    
    int array[array_size];
    int rotated_array[array_size];
    for(int i=0; i<array_size; i++)
    {
        cin>>array[i];
    }
    
    
    
    for(int old_index=0; old_index<array_size; old_index++)
    {
        int new_index = (old_index + array_size - left_rotation)%array_size;      // Here I made right rotation for my ease.
        
        rotated_array[new_index] = array[old_index];
    }
    
    for(int i=0; i<array_size; i++)
    {
        cout<<rotated_array[i]<<" ";
    }
    
    return 0;
}