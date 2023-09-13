#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){

    /* int arr[] = {1,3,5,6,7,8,9,11};
    int n = 8;
    int target = 8;

    int ans = binarySearch(arr,n,target);
    if(ans == -1){
        cout<<"Sorry, element not found ";
    }
    else{
        cout<<"Element found at index : "<<ans;
    } */



    // BY BINARY SEARCH : USING STL
    vector<int> v{1,2,3,4,5,6,7,8,9};
    int arr[] ={1,2,3,4,5,6};
    int size = 6;

    /* if(binary_search(v.begin(),v.end(),15)){
        cout<<"Found ";
    }
    else{
        cout<<"Not found. ";
    } */
    if(binary_search(arr, arr+size,4)){     // base address, last address, and target value
        cout<<"Found ";
    }
    else{
        cout<<"Not found. ";
    }

    return 0;
}