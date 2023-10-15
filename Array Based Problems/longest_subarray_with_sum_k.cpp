#include<bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) 
{
    int l=0,r=0, n = a.size();
    long long sum = a[0];
    int len = 0;

    while (r < n )
    {
        while (l <= r && sum > k)
        {
            sum-=a[l];
            l++;
        }

        if (sum == k) len = max(len, r-l+1);
        r++;
        if (r < n) sum+=a[r];
        
    }
    return len;

}


int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}