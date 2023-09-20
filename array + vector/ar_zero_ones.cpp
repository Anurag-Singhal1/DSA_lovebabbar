#include<iostream>
using namespace std;

void count(int arr[],int size){
    int count1 = 0;
    int count0 = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==1)
            count1++;
        else
            count0++;            
    }
    cout<<"No of 1's in the Array : "<<count1<<endl;
    cout<<"No of 0's in the Array : "<<count0<<endl;
}

int main(){

    int arr[]={1,1,0,1,0,0,0,1,1,1,0,1,0,1};
    int size = 14;

    count(arr,size);
    return 0;
}