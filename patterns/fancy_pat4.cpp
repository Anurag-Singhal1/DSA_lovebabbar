#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<k;
            k++;
            if(j !=i){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start = k-n;
    for(int i=0;i<n;i++){
        int k = start;
        for(int j=0;j<n-i;j++){
            cout<<k;
            k++;
            if(j!=n-i-1){
                cout<<"*";
            }
        }
        start -=(n-i-1);
        cout<<endl;
    }
}