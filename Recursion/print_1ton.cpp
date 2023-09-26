#include<bits/stdc++.h>
using namespace std;

void num(int n, int i)
{
    if (i>n) return ;
    cout<<i<<" ";
    i++;
    num(n,i);
}

 int main()
 {
    int count,i=1;
    cout<<"Enter number: ";
    cin>>count;

    num(count ,i);
    cout<<"Function Exection completed";
    return 0;

 }