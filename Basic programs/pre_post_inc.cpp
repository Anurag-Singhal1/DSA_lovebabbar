#include<iostream>
using namespace std;

int main(){
    int a =12;
    cout<<a++<<endl;
    cout<<++a<<endl; 
    cout<<a<<endl;

    int b=6;
    int c = b++ + 1;
    cout<<c<<endl;

    int d= 5;                                // tricky question....
    cout<<(++d)*(++d)<<endl;


    // SWITCH CASE.....
    // int t;
    // cin>>t;
    // while(t--){
    //     int val;
    //     cout<<"Enter the value : "<<endl;
    //     cin>>val;

    //     switch(val){
    //         case 1: cout<<"Anurag";
    //         break;
    //         case 2: cout<<"Pranav";
    //         break;
    //         case 3: cout<<"Singhal";
    //         break;
    //         case 4: cout<<"Anu";
    //         break;
    //         default: cout<<"JAI SHREE RAM";
            
    //     }
    // }
    return 0;
}