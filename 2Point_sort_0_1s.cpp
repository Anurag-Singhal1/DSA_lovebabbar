#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr {1,0,0,1,1,0,0,1,0,0,1,0};
    // vector<int> arr {0,0,0,0,0,0,1,0,0,1,0};

    int st = 0;
    int end  = arr.size()-1;
    int i=0;

    while(st<=end){
        if(arr[i]==0){
            // swap(arr[i],arr[st]);
            st++;
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
    }
    for(auto value: arr){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}