#include<iostream>
using namespace std;

/* int main(){
    int arr[6];
    cout<<arr<<endl;    // shows th e address of the array : base address
    cout<<&arr<<endl;      // same address as above.

    char array[23];
    bool aray[23];
    cout<<"Array created successfully. ";

    return 0;
} */

/* int main(){

    int arr[] = {2,3,4,5,6,7,8};   //yes
    int brr[5] = {1,2,3,4,5};      //yes
    int crr[10] = {1,2,3,4,5,6,};   // yes, 0 on all rest positions.
    int drr[3] = {2,3,4,5,6};     // error : 3 bolke jyada mat daalo

    cout<<"Array initialised successfully. ";
    return 0;
} */

/* int main(){

    int arr[]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} */

int main(){
    // int n;
    // cin>>n;
    int arr[10];

    cout<<"Enter the input values in array : "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"Printing the values of array : ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
   



    return 0;
}