#include<iostream>
#include<vector>
using namespace std;

int main(){

    // duplicates  - use marking the element concept.
    vector<int> arr {1,2,3,4,5,6};
    vector<int> brr {1,2,3,7};

    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
        if(brr[i]!=INT_MIN){
            ans.push_back(brr[i]);
        }
    }
    for(auto value: ans){
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}