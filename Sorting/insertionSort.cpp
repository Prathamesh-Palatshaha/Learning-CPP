#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            swap(arr[j-1], arr[j]); 
            j--;
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

    insertionSort(arr,n);
    
    cout<<"Elements of Sorted array: ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
