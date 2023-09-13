#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    for(int i=0;i<n;i++){
        int k=i;
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<k+1<<" ";
            k++;
        }
        for(int j=0;j<i;j++){
            cout<<k-1<<" ";
            k--;
        }
        cout<<endl;
    }
}