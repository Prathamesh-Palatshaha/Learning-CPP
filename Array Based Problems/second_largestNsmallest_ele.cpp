#include <bits/stdc++.h>
using namespace std;

void secondLargest(vector<int >arr, int c)
{
    int max1 = arr[0];
    int max2 = -1;
    for (size_t i = 0; i < c; i++)
    {   
        if (arr[i]>max1)
        {   
            max2 = max1;
            max1 = arr[i]; 
        }
        else if (arr[i]<max1 && arr[i]> max2) max2 = arr[i];
    }
    cout<<"Second Largest Element: "<<max2;
}

void secondSmallest(vector<int >arr, int c)
{
    int min1=arr[0];
    int min2=INT_MAX;

    for (size_t i = 0; i < c; i++)
    {
        if (arr[i]<min1) 
        {   
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i]<min2 && arr[i]!= min1) min2 = arr[i];
    }
    cout << "Second Smallest Element: "<<min2;
}

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

    secondLargest(arr, c);
    cout<<endl;
    secondSmallest(arr, c);
    return 0;

}