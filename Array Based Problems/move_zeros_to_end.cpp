#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,0,3,0,0,4,5,9,10};
    int n = 10;
    int count = 0;
    int j = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            arr[j] = arr[i];
            j++;
        }
        else count++;
    }
    for (int k=0; k<count;k++)
    {
        arr[j] = 0;
        j++;
    }
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}