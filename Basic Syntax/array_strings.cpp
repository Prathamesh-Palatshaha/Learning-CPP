#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Working with arrays
    int a[3];
    int b[2][3];
    cout<<"Input at index 0: ";
    cin >> a[0];
    cout<<"Output a[0]: "<<a[0] <<endl;

    cout<<"Input at index b[0][2]: ";
    cin>> b[0][2];
    cout<<"Output b[0][2]: "<<b[0][2];

    //Working with strings

    string s = "Hemlo World!!";
    int len = s.size();
    cout<< "size of string is: " << len << endl;
    cout<<"Element at index 2 in string is: "<< s[2];
    return 0;
    

}