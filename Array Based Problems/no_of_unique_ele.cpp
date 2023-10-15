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
    int i = 0;
    for (size_t j = 0; j < c; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    cout << i + 1;
    return 0;
}