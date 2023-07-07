#include<iostream>
#include<vector>
using namespace std;


    // 2 pointer approach / dutch national flag....
void moveAllNegToLeft(int* arr,int n){
    int st=0,i=0;
    int end=n-1;

    while(st<=end){
        if(arr[i]<0){
            i++,st++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
    }
}

int main(){

    int arr[] ={-1,2,-3,4,-5,6,0,-5,34};  
    int n = sizeof(arr)/sizeof(arr[0]);

    moveAllNegToLeft(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}