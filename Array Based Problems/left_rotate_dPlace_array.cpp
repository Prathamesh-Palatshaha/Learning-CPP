#include <bits/stdc++.h>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3,4,5};
    //  int s = end(arr)-begin(arr);
    int s = arr.size();
    /*
    For dynamic d use d=d%s in while loop
    */
    int d = 0;
    // int nm = d-1; 
   while(d!=2)
   { 
     int temp = arr[0];
    for (size_t i = 0; i < s - 1; i++)
    {
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }  
    d++; 
    // nm--;
   } 
    
   for (auto i : arr)
    {
        cout << i << " ";
    }
   return 0;
}
