#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,count;
    cout<<"Enter num: ";
    cin>>num;
    while (num!=0)
    {
        num=num/10;
        count++;
        /* code */
    }
    cout<<"Count: "<<count;
    return 0;
}