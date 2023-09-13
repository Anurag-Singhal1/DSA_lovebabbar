#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

int main(){
    vector<int> arr {10,1,7,6,14,9};
    int n = arr.size();

    for(int i=0;i<n-1;i++){             // n-1  Rounds are there.
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){      // n-i-1 means upto 2nd last element in 1st round, bcz J+1 last jaayega
            if(arr[j]>arr[j+1]){
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped == false){
// sort ho chuka hai , no need to check in further rounds...round 2 krne ki need hi nhi hai.if already sorted.
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
/* int main(){
    vector<int> arr {10,1,7,6,14,9};
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
} */