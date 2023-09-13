#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

void solve(int arr[]){            // new pointer created by arr name..it is different from int arr[]
    cout<<sizeof(arr)<<endl;  //8 - size of p0inter
    arr[0] = 0;           // changes in original array..bcz pass by reference...

    cout<<arr<<endl;       // ye arr box ke andar address wali value hai
    cout<<&arr<<endl;   // it gives address of pointer arr box....
}

void update(int* p){
    *p+=10;  //  5+10 = 15
}

int main(){

    int arr[10] = {2,4,5,10};
    cout<<sizeof(arr)<<endl;   //10*4=40
    cout<<arr<<endl;
    cout<<&arr<<endl<<endl;
    solve(arr);
    for(auto i: arr){
        cout<<i<<" ";
    }cout<<endl;


    // QUESN UNDERSTANDING ON POINTER CONCEPT
    int a = 5;
    int* ptr = &a;
    update(ptr);
    cout<<"Value of a is : " <<a<<endl;  // 15
    return 0;
}