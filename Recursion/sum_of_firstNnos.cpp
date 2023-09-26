#include<bits/stdc++.h>
using namespace std;

int sumN(int n)
{
    if (n==0) return 0;
    return n + sumN(n-1);
}

 int main()
 {
    int count;
    cout<<"Enter number: ";
    cin>>count;

    int res = sumN(count);
    cout<<res<<endl;
    cout<<"Function Exection completed";
    return 0;

 }