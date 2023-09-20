#include<iostream>
#include<vector>
using namespace std;

// PRINTING ROW-WISE SUM ..
void printRowWise(int arr[][3], int rows, int cols){     // idhar 2nd [] mein size dena hi padega..
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}

// linear search in 2-d array....
bool linearSearch(int arr[][3], int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[3][3];
    int rows= 3;
    int cols = 3;
    cout<<"Enter 2d array values : ";
    // taking input of 2d array ...
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"Enter key : ";
    cin>>key;

    // printRowWise(arr,rows,cols);        // idhar simple array, so size bhi dena padega...no vector used
    if(linearSearch(arr,rows,cols,key)){
        cout<<"Key is found";
    }
    else{
        cout<<"Key is not in the array. ";
    }
    cout<<endl;

    return 0;
}