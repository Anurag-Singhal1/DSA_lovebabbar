#include<iostream>
#include<vector>
using namespace std;

// 1. VISITED METHOD......

/* void findMissing(int* arr,int n){
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);       // abs means absolute value: -3 ka +3
        if(arr[index-1]>0){
            arr[index-1]*=-1;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // all +ve indexes are missing...
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
} */

// 2. SWAPPING AND SORTING....
void findMissing(int* arr,int n){
    int i=0;
    while(i<n){
        int index = arr[i]-1;
        if(arr[i]!=arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            i++;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}


int main(){

    int arr[] = {1,3,5,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    findMissing(arr,n);
    return 0;

}