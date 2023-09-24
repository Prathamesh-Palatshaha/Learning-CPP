#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, data;
    int v;
    cout<<"Enter num: ";
    cin>>num;
    data = num;
     while (num!=0)
    {
        int rem=num%10;
        num = num/10;
        v = v*10 + rem;
    }
    // cout<<data<< v;
    if (data == v)
    {cout<<"Number "<<v<<" is Palindrome.";}
    else cout<<"Nope!";
    
    return 0;
}