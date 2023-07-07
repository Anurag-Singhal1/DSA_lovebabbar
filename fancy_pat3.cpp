#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<i+1;j++){
            if(j==0){
                cout<<"*";
            }
            else{
                cout<<j;
            }
        }
        j-=2;
        for(;j>=0;j--){
            if(j==0){
                cout<<"*";
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        int j;
        for(j=0;j<n-i-1;j++){
            if(j==0){
                cout<<"*";
            }
            else{
                cout<<j;
            }
        }
        j-=2;
        for(;j>=0;j--){
            if(j==0){
                cout<<"*";
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
}