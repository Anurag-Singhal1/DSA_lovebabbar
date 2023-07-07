#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL, lower_bound function
using namespace std;

int firstOcc(vector<int> v, int target){
    int s =0;
    int e = v.size()-1;
    int mid = s + (e-s)/2 ;
    int ans=-1;

    while(s<=e){
        if(v[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(target<v[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2 ;
    }
    return ans;
}

int main(){

    vector<int> v {1,2,2,3,3,3,4,4,4,4,6,7};
    int target = 4;

    int ans = firstOcc(v,target);
    cout<<"Ans is : "<<ans<<endl;

    // by lower_bound function...
    auto ans2 = lower_bound(v.begin(),v.end(),3);      
    cout<<"By STL: "<< ans2-v.begin() <<endl;       // address- address type

    return 0;
}