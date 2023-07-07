#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

int oddOcc(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid%2==0){      // if mid is at even index
            if(mid+1<arr.size() && arr[mid]==arr[mid+1]){
                s = mid+2;
            }
            else{
                e = mid; //here exception, s<=e hi rahega, no infinity ka darr..bcz (s==e) already separate case
            }
        }
        else{        // if mid is at odd index
            if(mid-1>=0 && arr[mid]==arr[mid-1]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    vector<int> arr {1,1,2,2,3,3,4,4,3,600,600,4,4};

    int ans = oddOcc(arr);
    cout<<"Index is : "<<ans<<endl;
    cout<<"Value is : "<<arr[ans]<<endl;
    return 0;
}