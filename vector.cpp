#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;

    int ans = sizeof(arr)/sizeof(int);
    cout<<ans <<endl;              //6 
    cout<<arr.size() <<endl;       //0
    cout<<arr.capacity() <<endl;   //0

    arr.push_back(3);
    arr.push_back(5);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //   remove/delete
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // vector<int> brr(10);          // initialises all 10 with 0
    // vector<int> brr(10, -10);          // initialises all with -10

    /* int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> brr(n,-10);
    cout<<"Size : "<<brr.size() <<endl;
    cout<<"Capacity of b : " <<brr.capacity() <<endl;

    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl; */


    // HERE, GIVING ALL ARAY VALUES AT THE TIME OF DECLARATION.  {}
    vector<int> crr {1,2,3,4,5,6};
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<"Vector crr is empty or not : "<<crr.empty()<<endl;      // 0 means false i.e, not empty

    vector<int> drr;
    cout<<"Vector drr is empty or not : " << drr.empty() <<endl;    // 1 means that it is empty.

    return 0;
}