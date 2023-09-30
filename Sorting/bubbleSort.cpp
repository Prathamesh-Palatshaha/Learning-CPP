#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++)
         {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j+1],arr[j]);
            }
        }
    }

}

int main()
{
    int n;
    cout<< "Enter the size of array: ";
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int ele;
        cout<< "Enter element "<<i+1<<endl;
        cin>>ele;
        arr[i] = ele;
    }

    bubbleSort(arr,n);
    
    cout<<"Elements of Sorted array: ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
