#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n==0 || n==1) return 1 ;
    return n*fact(n-1);
}
 int main()
 {
    int count,i=1;
    cout<<"Enter number: ";
    cin>>count;

    int res = fact(count);
    cout<<res<<endl;
    cout<<"Function Exection completed";
    return 0;

 }