#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,4,5};
    // approach 1
    int count = 5;
    int sum1 = 5*(5+1)/2; //  n(n+1)/2
    int sum2=0;
    for (size_t i = 0; i < end(arr)-begin(arr); i++)
    {
        sum2+=arr[i];
    }
    cout<<sum1<<endl<<sum2<<endl;
    cout<<sum1-sum2<<endl;

    // approach 2
    int xor1 =0, xor2=0;
    for (size_t i = 1; i <= 5; i++)
    {
        xor1^=i;
    }
    for (size_t j = 0; j <= 3; j++)
    {
        xor2^=arr[j];
    }
    cout << (xor2^xor1);
    
    return 0;
}