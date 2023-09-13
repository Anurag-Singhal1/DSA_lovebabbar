#include<bits/stdc++.h>      
using namespace std;

// by self 
void printArray(int arr[], int n){   // to print the array
    // base case
    if(n==0){
        return;
    }
    cout<<arr[0]<<" ";       // *(arr) also works 
    printArray(arr+1,n-1);
}

// by love babbar way
void printArr(int arr[],int i, int n){   // to print the array
    // base case
    if(i>=n){
        return;
    }
    cout<<arr[i]<<" ";       // *(arr) also works 
    printArr(arr,i+1,n);
}

int maxElement(int arr[],int n){  // to find the max in an array
    if(n==0){
        return INT_MIN;
    }
    int ans =  max(arr[0], maxElement(arr+1, n-1));
    return ans;
}

int minElement(int arr[],int n){   // to find the min in an array...
    if(n==0){
        return INT_MAX;
    }
    int ans =  min(arr[0], minElement(arr+1, n-1));
    return ans;
}

int main(){

    int arr[] = {2,50,8,10,121,1,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    printArray(arr,n);
    cout<<endl;
    printArr(arr,i,n);
    cout<<endl<<"Max element in an array : "<<maxElement(arr,n)<<endl;
    cout<<"Min element in an array : "<<minElement(arr,n)<<endl;
    return 0;
}