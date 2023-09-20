#include<iostream>
using namespace std;

int maxNo(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int arr[] = {2,101,67,-1,90,87,89};
    int size = 7;

    cout<<maxNo(arr,size);
    return 0;
}