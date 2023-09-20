#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void inc(int arr[],int size){
    arr[0] = arr[0]+10;
    printArray(arr,size);
}

int main(){

    int arr[] = {3,5};
    int size = 2;
    printArray(arr,size);   // 3 , 5
    inc(arr,size);          // 13 , 5
    printArray(arr,size);   // 13 , 5

    return 0;
}