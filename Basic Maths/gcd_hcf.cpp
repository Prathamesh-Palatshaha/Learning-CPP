#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int num1,num2,i;
    cout<<"Enter Number: ";
    cin>>num1>>num2;
    int num;
    if (num1>num2) num= num2;
    else num = num1;
    for ( i = 1; i <= num; i++)
    {
        if ((num1%i == 0)&&(num2%i == 0)) v.emplace_back(i);
    }
    cout<<v.back();
    return 0;
    
}