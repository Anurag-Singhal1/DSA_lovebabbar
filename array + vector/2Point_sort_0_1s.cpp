#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector<int> arr {1,0,0,1,1,0,0,1,0,0,1,0};
    vector<int> arr {0,0,0,0,0,0,1,0,0,1,0};

    int st = 0;
    int end  = arr.size()-1;

    while(st<=end){
        if(arr[st]==0){

            st++;
        }
        else{
            swap(arr[st],arr[end]);
            end--;
        }
    }
    for(auto value: arr){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}