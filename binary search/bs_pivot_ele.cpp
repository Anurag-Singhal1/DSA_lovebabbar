#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

int findPivot(vector<int> arr){
    int s =0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2 ;

    while(s<=e){         // s<=e
        if(s==e){
            return s;
        }
        if(mid+1<=e && arr[mid]>arr[mid+1]){      // jisse ki code fate na...corner case
            return mid;                                     // mid+1<=e
        }
        if(mid-1>=s && arr[mid-1]>arr[mid]){     // corner case ki wajah se humne ye && conditn lagayi hai
            return mid-1;                  // mid-1>=s   
        }
        if(arr[s]>arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;           // s = mid+1;
        }
        mid = s + (e-s)/2 ;
    }
    return -1;      
}

int main(){

    // vector<int> arr {1,2,3,4,5,6,7,5,6};
    // vector<int> arr {1,2,3,4,5,6,7};
    // vector<int> arr {1,3};
    vector<int> arr {3};

    int ans = findPivot(arr);
    cout<<"Index Value : "<<ans<<endl;
    cout<<"Element is : "<<arr[ans]<<endl;
    return 0;
}

// if array has only one element, then that also be the pivot element.
// no duplicates must be present here.
