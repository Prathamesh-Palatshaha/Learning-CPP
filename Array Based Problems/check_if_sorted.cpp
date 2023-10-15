#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    cout << "No of elements in arr: ";
    int c;
    cin >> c;

    for (size_t i = 0; i < c; i++)
    {
        int ele;
        cout << "Enter ele " << i + 1 << ":";
        cin >> ele;
        arr.emplace_back(ele);
    }
    // int flag = 0;
    for (size_t i = 0; i < c; i++)
    {
        if (arr[i]>arr[i+1])
        {
            cout<< "Not sorted";
            return 0 ;
        }
    }
    cout<<"Sorted";
       
    return 0;

}