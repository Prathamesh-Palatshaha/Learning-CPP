#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2,i;
    cout<<"Enter Number: ";
    cin>>num1>>num2;
    int num;
    
    while (num1!=0 && num2!=0)
    {
        if (num1>num2) num1=num1 % num2;
        else num2 = num2%num1 ;
    }
    if (num1 ==0) cout<<num2;
    else cout<< num1;
    return 0;
    
}