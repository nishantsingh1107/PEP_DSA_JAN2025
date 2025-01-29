#include<bits/stdc++.h>
using namespace std;

// void getElements(int arr[], int size){
//     int small = INT_MAX;
//     int s_small = INT_MAX;
//     int large = INT_MIN, s_large = INT_MIN;

//     for(int i = 0; i < size; i++){
//         small = min(small, arr[i]);
//         large = max(large, arr[i]);
//     }
//     for(int i = 0; i < size; i++){
//         if(arr[i] < s_small && arr[i] != small){
//             s_small = arr[i];
//         }

//         if(arr[i] > s_large && arr[i] != large){
//             s_large = arr[i];
//         }
//     }
//     cout<<"Second largest element : "<<s_large<<endl;
//     cout<<"Second smallest element : "<<s_small<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter Array elements : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     getElements(arr, n);
// }

// int sum_array(int arr[][100], int m, int n){
//     int sum = 0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             sum += arr[i][j];
//         }
//     }
//     return sum;
// }


int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter 2D array elements: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    // sum_array(arr, m, n);
    // int target;
    // cout<<"Enter target: ";
    // cin>>target;
    // for(int i=0;i<m;i++){
    //     for(int j=0;i<n;j++){
    //         if(arr[i][j] == target){
    //             cout<<"The element present at index : "<<i<<j<<endl;
    //         }
    //         else{
    //             cout<<"The target element is not present."<<endl;
    //         }
    //     }
    // }

    int maxSum = 0;
    int rowIndex = -1;

    for (int i = 0; i < m; ++i) {
        int currentSum = 0;
        for (int j = 0; j < n; ++j) {
            currentSum += arr[i][j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
            rowIndex = i;
        }
    }
    cout<<"The maximum sum is: "<<maxSum<<" of row index : "<<rowIndex;
}
