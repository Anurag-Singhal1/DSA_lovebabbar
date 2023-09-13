#include<bits/stdc++.h>      
using namespace std;

// bool isSorted(int arr[], int n){
//     // base case
//     if(n==0){
//         return true;
//     }
//     if(*(arr+1)<*(arr)){
//         return false;
//     }
//     return isSorted(arr+1,n-1);
// }
bool isSort(int arr[],int i, int n){
    // base case
    if(i>=n){
        return true;
    }  
    if(arr[i]<arr[i-1]){
        return false;
    }
    return isSort(arr,i+1,n);
}

int main(){

    int arr[] = {2,4,6,10,11,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=1;
    // cout<<isSorted(arr,n);
    cout<<endl;
    cout<<isSort(arr,i,n);
    return 0;
}