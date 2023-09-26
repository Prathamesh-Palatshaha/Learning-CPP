#include<bits/stdc++.h>
using namespace std;
// define int count;
void print(string name,int n,int i)
{
   int  count = i;
    if (count > n){ return ;}
    cout<<name<<endl;
    i++;
    print(name, n,i);
}
 int main()
 {
    string s;
    int count,i=1;
    cout<<"Enter COunt: ";
    cin>>count;
    cout<<"Enter name: ";
    cin >> s;
    print(s, count ,i);
    cout<<"Function Exection completed";
    return 0;

 }
