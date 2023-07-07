#include<iostream>
#include<vector>
using namespace std;

int main(){


    int row = 3;
    int col = 5;
    vector<vector<int> > arr(row, vector<int> (col,-3));          // 3 row & 5 col : -3 every element 
    // vector<vector<int> > arr(row, vector<int> (col));          //  initilaise with 0 every element 
    arr[2][3] = 5;                                                  // make this index value as 5 from -3

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){    // har row mein jitne element ho0ge unko printkr dega. arr[i]
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}