#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int v;
    cout<<"Enter num: ";
    cin>>num;
     while (num!=0)
    {
        int rem=num%10;
        num = num/10;
        v = v*10 + rem;
    }
    cout<<"Reverse num: "<<v;
    
    return 0;
}