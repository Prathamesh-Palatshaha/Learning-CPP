#include<bits/stdc++.h>
using namespace std;

void Union(vector<int> arr1, vector<int> arr2, int m, int n)
{
    vector<int> arr;
    int i = 0;
    int j = 0;
    // int k = 0;
    while (m!=0 && n!=0)
    {
        if (arr1[i] > arr2[j])
        {
            arr.emplace_back(arr2[j]);
            j++;
            m--;
        }   
        else
        {
            arr.emplace_back(arr2[i]);
            i++;
            n--;
        }   
    }
    while (m!=0)
    {
        arr.emplace_back(arr2[i]);
            i++;
            m--;
    }

    while(n!=0)
    {
         arr.emplace_back(arr2[j]);
            j++;
            n--;
    }

    for (int i = 0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main()
{
    vector<int> arr1,arr2;
    cout << "No of elements in arr 1: ";
    int a1;
    cin >> a1;
    for (size_t i = 0; i < a1; i++)
    {
        int ele;
        cout << "Enter ele " << i + 1 << ":";
        cin >> ele;
        arr1.emplace_back(ele);
    }

    cout << "No of elements in arr 2: ";
    int a2;
    cin >> a2;
    for (size_t i = 0; i < a2; i++)
    {
        int ele;
        cout << "Enter ele " << i + 1 << ":";
        cin >> ele;
        arr2.emplace_back(ele);
    }

    Union(arr1,arr2,a1,a2);
return 0;
}