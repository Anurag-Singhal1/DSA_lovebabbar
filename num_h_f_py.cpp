#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    int st =2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<2*i+1;j++){
            if(j==0){
                cout<<j+1<<" ";
            }
            else if(j==2*i){
                cout<<i+1<<" ";
            }
            else if(i==n-1 && j%2==0){
                cout<<st<<" ";
                st++;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}