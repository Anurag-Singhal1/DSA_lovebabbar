#include<iostream>
#include<vector>
using namespace std;

void maxMin(int arr[][3],int row, int col){
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0;i< row ;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"Maximum element is : "<<max<<endl;
    cout<<"Minimum element is : "<<min<<endl;
}

int main(){

    int arr[3][3];
    int row = 3;
    int col = 3;

    cout<<"Enter ur values : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your 2-d array is : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    maxMin(arr,row,col);

    return 0;
}