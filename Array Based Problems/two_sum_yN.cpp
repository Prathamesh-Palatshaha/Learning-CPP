#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2,6,5,8,11};
    int sum = 14;

    //Brute Force approach
    /*
    for (size_t i = 0; i < end(arr)-begin(arr); i++)
    {
        for (size_t j = i+1; j < end(arr)-begin(arr); j++)
        {
            int temp = arr[i] + arr[j];
            if (temp == sum)
             {
             cout<<arr[i]<<" "<<arr[j]<<endl;
             cout<<"Yes"<<endl;
             }
                
        } 
    }
    */
   //Better Approach 
   /*
   
   int flag =0;
   map<int,int> mpp;
   for (size_t i = 0; i < end(arr)-begin(arr); i++)
   {
     int num = arr[i];
     int rem = sum - num;
    if (mpp.find(rem)!=mpp.end())
    {
        flag =1;
        cout<<"YES";
    }
    mpp[num] = i;
   }
   if (flag!=1) cout<<"NO";    
   
   */

  //optimal 
  int left =0, right =(end(arr)-begin(arr)) -1;
  while(left < right)
  {
    int num = arr[left]+arr[right];
    //  int rem = sum - num;
    if (num < sum) left++;
    else if (num>sum) right--;
    else 
    {cout<<"YES"; break;}
  }
    return 0;
}