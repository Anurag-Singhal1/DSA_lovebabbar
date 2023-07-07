#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

int main(){

    vector<int> arr {4,3,5,2,1};
    int n = arr.size();
    // selection sort....
    for(int i=0;i<n-1;i++){           // outer loop - (n-1) rounds
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}