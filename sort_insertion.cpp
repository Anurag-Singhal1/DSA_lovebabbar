#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

int main(){
    vector<int> arr {10,1,7,6,14,9};
    int n = arr.size();

    for(int i=1;i<n;i++){     // no of rounds(n-1)..where n is no elements in an array
        // step - A : Fetch
        int val = arr[i];  // hume val mein store hi krna padega,qki shift kki wjh se baad mwin i index pe val changes ho jaayegi i.e, OVER-WRITE..
        // step - B : Compare
        int j= i-1;
        for(;j>=0;j--){                
            if(arr[j]>val){      
                // step - C : shift 
                arr[j+1]=arr[j];     // here, i index pe ab i-1 ki value aa chuki hai..OVER-WRITE HO CHUKA HAII..so that;s why we store arr[i] in val before.
            }
            else{
                break;     // for loop se bhar nikal dega.
            }
        }
        // step - D : Copying
        arr[j+1] = val;       // sometimes, also paste same value. ex - 14 ko 14 hi kr dega...else condin.
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}