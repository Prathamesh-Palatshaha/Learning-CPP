/*
Time Complexity of Ordered Map:
Storing & fetching takes: O(logn) time for all cases.

For Unordered Map:
best and average case: O(1)
Worst case: O(n) **linear time rarely occurs (this happens because of internal collisions)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    map<int, int> hashh;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        hashh[arr[i]]++;
    }
    
    //display hashh elements

    for(auto it: hashh)
    cout<<it.first<<"->"<<it.second<<endl;

    int q;
    cin>>q;
    while (q--)
    {
        int num;
        cin>>num;
        cout<<hashh[num] << endl;
    }
    return 0;
}