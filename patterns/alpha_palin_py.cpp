#include<iostream>
using namespace std;

int main(){
    int n=5;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            char ch = j+1+64;
            cout<<ch<<" ";
        }
        for(int j=i;j>0;j--){
            char ch = j+64;
            cout<<ch<<" ";
        }cout<<endl;
    }

    return 0;
}