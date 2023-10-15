#include<bits/stdc++.h>
using namespace std;
//find the number that appears once and the other twice
int main()
{
    int arr[] = {1,1,2,3,3,4,4,10,10};
    int xor1;
    for (size_t i = 0; i < end(arr)-begin(arr); i++)
    {
        xor1^=arr[i];
    }
    cout<<xor1;
    
    return 0;
}