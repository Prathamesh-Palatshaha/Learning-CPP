#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.emplace_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }

    for (size_t i = low; i <=high; i++)
    {
        arr[i] = temp[i-low];
    }
    
}

void merge(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge(arr, low, mid);
    merge(arr, mid + 1, high);
    mergeSort(arr, low, mid, high);
}


int main()
{
     int n;
    cout<< "Enter the size of array: ";
    cin>> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cout<< "Enter element "<<i+1<<endl;
        cin>>ele;
        arr.emplace_back(ele);
    }

    merge(arr,0,n);
    
    cout<<"Elements of Sorted array: ";
    for (auto i: arr)
    {
        cout<<i<<" ";
    }
    return 0;
}