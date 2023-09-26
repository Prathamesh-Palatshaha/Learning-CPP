#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int num,i;
    cout<<"Enter Number: ";
    cin>>num;
    for ( i = 1; i <= num/2; i++)
    {
        if (num%i==0) v.emplace_back(i);
    }
    for (auto it : v)
    {
        cout<<it<<" ";
    }
    return 0;
    
}