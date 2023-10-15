#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2,1,2,2,2,2,2,6,5,8,11,1,2,6,2,7,2,2};
    int s = end(arr)-begin(arr);
    /*
    Approach 1
    map<int,int> mpp;
    for (size_t i = 0; i < s; i++)
    {
        mpp[arr[i]]++;
    }
    
    for (auto it : mpp)
    {
        if (it.second > s/2) cout<<it.first<<endl;
    }
    
    */

   /*
   Approach 2
   */
  int c=0,ele;
  for (size_t i = 0; i < s; i++)
  {
    if (c==0)
    {
        ele = arr[i];
        c++;
    }
    else if (arr[i] == ele) c++;
    else c--;
  }
  int ct=0;
  for (size_t i = 0; i < s; i++)
  {
    if (arr[i] == ele) ct++;
  }
  if (ct>s/2) cout<<ele;
  else cout<<-1;
  
    

    
    return 0;
}