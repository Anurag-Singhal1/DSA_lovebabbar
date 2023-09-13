#include<iostream>
#include <cstring>
using namespace std;

/* int main(){

    int arr[500];                 // always fix the  array size with any big value.
    int n;
    cout<<"Enter the size of ur Array : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        // cout<<2*arr[i]<<" ";
        cout<<1<<" ";
    }
    return 0;
} */

/* int main(){
    int arr[10] = {1,2,3,4,5};

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";   // fills rest of the blocks with value '0'.
    }
    return 0;
} */


// MEMSET FUNCTON()
int main(){
    int arr[10];
    memset(arr,-1,sizeof(arr));
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}