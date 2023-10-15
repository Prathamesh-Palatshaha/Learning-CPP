#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,1,0,2,0,0,1,2,2,0};
    int low = 0, mid=0;
    int high = (end(arr)-begin(arr))-1;
    while(mid<=high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid],arr[low]);
            low++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
        mid++;
    }
    for (auto &&i : arr)
    {
        cout<<i<<" ";
    }
    
    

return 0;
}