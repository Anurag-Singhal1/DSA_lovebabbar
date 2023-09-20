#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr {2,4,6,8,1,5,7};

    int st = 0;
    int end = arr.size()-1;
    int i=0;

    for(int i=0;i<arr.size()-1;i++){
        cout<<arr[i+1]<<" ";
    }
    cout<<arr[i]<<endl;
    return 0;
}