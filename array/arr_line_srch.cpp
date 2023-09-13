#include<iostream>
using namespace std;

bool find(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] ={1,2,3,4,5};
    int size = 5;

    cout<<"Enter the key to find : ";
    int key;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"found ";
    }
    else{
        cout<<"Not found ";
    }
    cout<<endl;
}

// other way without making function is by making a variable named bool flag=0;