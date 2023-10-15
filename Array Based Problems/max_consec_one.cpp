#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0};
    /*

    Approach 1: Space Complexity O(n), TC O(n)

    vector<int> c;
    int counter = 0;
    for (size_t i = 0; i < end(arr) - begin(arr); i++)
    {
        if (arr[i] == 1)
        {
            counter += 1;
        }
        else
        {
            c.emplace_back(counter);
            counter = 0;
        }
    }
    for (auto i : c)
    {
        cout << i << " ";
    }
    cout<<endl;
    cout<< *max_element (begin(c),end(c));
    */


   // Approach 2 TC O(N) SC O(1)

   int maxm = 0, c = 0;
   for (size_t i = 0; i < end(arr) - begin(arr); i++)
   {
        if (arr[i] == 1)
        {
            c+=1;
        }
        else
        {
            if (c > maxm) maxm = c;
            c=0;
        }

   }
   cout<<maxm;
    return 0;
}