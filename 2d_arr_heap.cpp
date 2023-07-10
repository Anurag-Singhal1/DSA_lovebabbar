#include<bits/stdc++.h>
using namespace std;

int main(){

    int row = 5;
    int col = 3;

    int **arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    // printing the array
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    // deallocating the memory :-
    for(int i=0;i<row;i++){
        delete []arr[i];           // deletes columns
    }
    delete []arr;               // delete row

    return 0;
}

//  -------------------- BY VECTOR ----------------------------------------------------------

// int main(){
//     int row = 5;
//     int col = 3;
//     vector<vector<int> > arr(row, vector<int>(col,0));      // initialising all with 0
    
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }