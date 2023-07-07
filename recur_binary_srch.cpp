#include<bits/stdc++.h>      
using namespace std;

int binary(vector<int> &arr, int s,int e, int &key){
    // base case
    int mid = s +(e-s)/2;
    if(s>e){
        return -1;
    }
    // 1 case solve krdo
    if(arr[mid]==key){
        return mid;
    }
    // Baaki recursion sambhal lega
    if(arr[mid]>key){  // left search
        return binary(arr,s,mid-1,key); 
    }
    else{         // right search
        return binary(arr,mid+1,e,key);
    }
}

int main(){

    vector<int> v{2,3,10,15};      // array is sorted always
    int key = 10;
    int n = v.size();
    int s=0;
    int e =n-1;
    int ans = binary(v,s,e,key);
    cout<<"Element is at index : "<<ans<<endl;
    return 0;
}