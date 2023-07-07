#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
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
int lastOcc(vector<int> v, int target){
    int s =0;
    int e = v.size()-1;
    int mid = s + (e-s)/2 ;
    int ans=-1;

    while(s<=e){
        if(v[mid] == target){
            ans = mid;
            s = mid+1;
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

    vector<int> v {1,2,2,3,3,3,4,4,4,4,4,4,4,4,6,7};
    int target = 4;

    int focc = firstOcc(v,target);
    int locc = lastOcc(v,target);
    int ans = locc-focc+1 ;
    cout<<"Total no of occurences are : "<<ans<<endl;

    return 0;
}