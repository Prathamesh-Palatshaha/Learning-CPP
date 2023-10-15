#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,0,3,0,0,4,5,9,10};
    int n = 10;
    int find = 100;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            cout<<find<<" PRESENT!";
            return 0;
        }
    }
    cout<<"NOT PRESENT!";
    
    
    return 0;
}