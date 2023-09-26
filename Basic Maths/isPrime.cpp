#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count =0;
    int num,i;
    cout<<"Enter Number: ";
    cin>>num;
    for ( i = 2; i <= num/2; i++)
    {
        if (num%i==0) count +=1;
        if (count == 1) break;
    }
    if (count==1) cout<<"Not Prime.";
    else cout<<"Is Prime.";
    return 0;
    
}