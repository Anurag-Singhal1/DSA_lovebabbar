#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

int bs(vector<int> arr, int st, int end, int x){
    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(x>arr[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int expoSearch(vector<int> arr, int x){
    int n = arr.size();       // bcz, phir min ke andar direct isko daalne mein dikkat krta hai,..
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=x){
        i*=2;          // that' s why it is EXPONENTIAL SEARCH....*2
    }
    return bs(arr,i/2,min(i,n-1),x);
}

int main(){

    vector<int> arr{3,4,5,6,11,13,14,15,56,70};
    int x = 13;
    int ans = expoSearch(arr,x); 

    cout<<"Your value is at index : "<<ans<<endl;

    return 0;
}