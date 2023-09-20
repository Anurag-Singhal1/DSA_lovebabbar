#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr {1,2,3,4,5,6};
    vector<int> brr {2,4,4,6,8};

    vector<int> ans ;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=-1;     // to remove duplicates....it mark that element as -1/INT_MIN
                ans.push_back(arr[i]);
            }
        }
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    for(auto value: ans){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}
// now, if duplicate happens , then mark that as -1.