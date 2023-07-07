#include<iostream>
#include<vector>
using namespace std;


void printArray(int arr[][3], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
                              // TRANSPOSE BY SWAPPING.....
/* void transpose(int arr[][3], int row, int col ){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i>j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
} */

// transpose by taking another array transpose and taking input col-wise[j][i].....
void trans(int arr[][3], int row, int col, int transpose[][3] ){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i] = arr[i][j];
        }
    }
}

int main(){

    int arr[3][3];
    int row =3;
    int col = 3;

    cout<<"Enter your values : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<" ur array is : "<<endl;
    printArray(arr,row,col);
    int transpose[3][3];
    trans(arr,row,col,transpose);
    cout<<"Transpose of given array is : "<<endl;
    printArray(transpose,row,col);


    return 0;
}