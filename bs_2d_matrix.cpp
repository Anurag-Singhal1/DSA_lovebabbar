#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

bool binarySearch(int arr[][4], int rows, int cols, int target){
    int s =0;
    int e = rows*cols -1;
    int mid = s + (e-s)/2 ;

    while(s<=e){
        int rowindex = mid/cols;
        int colindex = mid%cols;
        int element = arr[rowindex][colindex];

        if(element == target){
            cout<<"Found at  "<<rowindex<<" "<<colindex<<endl;
            return true;
        }
        else if(target>element){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2 ;
    }
    return false;
}

int main(){

    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows = 5;
    int cols = 4;
    int target = 9;

    bool ans = binarySearch(arr, rows, cols, target);
    if(ans){
        cout<<"Element Found ";
    }
    else{
        cout<<"ELement not found. ";
    }

    return 0;
}