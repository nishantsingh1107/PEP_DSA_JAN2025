#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    // Use a safer formula to calculate mid
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return true; // Key found
        }
        if (key > arr[mid]) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
        mid = start + (end - start) / 2;
    }
    return false; // Key not found
}

int main(){
    int n, k;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter array elements : "<<endl;
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key : ";
    cin>>k;
    cout<<binarySearch(arr, n, k);
    return 0;
}