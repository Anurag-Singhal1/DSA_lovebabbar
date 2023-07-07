#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter ur input value : ";
    cin>>n;

    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int j=0;j<2*(n-i-1);j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<"* ";
        for(int j=0;j<2*(n-1);j++){
            cout<<"  ";
        }
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;

    return 0;
}





