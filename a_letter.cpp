#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter ur input value : ";
    cin>>n;

    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(j==n-i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=0;j<2*i;j++){
            // if(j==i/2)
            if((i+j)==n-1){
                cout<<"*";
            }
            else{

                cout<<" ";
            }
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}