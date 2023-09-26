#include<bits/stdc++.h>
using namespace std;

bool palin(string &s,int i)
{   
    int len = s.size();
    if (i >= len/2) return true;
    if (s[i]!=s[len-i-1]) return false;
    i++;
    palin(s, i);
}

int main()
{
    string s;
    cout<<"Enter Str: ";
    cin>> s;
    bool res = palin(s,0);
    cout<<res<<endl;
    return 0;
}