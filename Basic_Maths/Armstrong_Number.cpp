#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,data;
    cout<<"Enter num: ";
    cin>> num;
    data = num;
    int sum;
    while(num!=0)
    {
        int rem = num%10;
        num=num/10;
        sum +=pow(rem,3);
    }
    if (sum == data) cout<<"true";
    else cout<<"false";
    return 0;
}