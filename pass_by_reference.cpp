#include<bits/stdc++.h>
using namespace std;

// Pass by reference: 
//In this type of function call we pass original data. So any changes made during exection will be reflected in the original data.

//NOTE: arrays are by default pass by reference.
void print(int &a)
{
    cout<< a << endl;
    a = a+5;
    cout << a <<endl;
    
}

int main()
{
    int num =10;
    print(num);

    cout<< num;
    return 0;
} 