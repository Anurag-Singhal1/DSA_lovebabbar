#include<iostream>
using namespace std;

int maximum(int a , int b, int c){
    if(a>b){
        if(a>c)
            return a;
        else
            return c;
    }
    else{ 
        if(b>c)
            return b;
        else
            return c;
    }
}

int main(){
    int a , b, c;
    cout<<"Enter your 3 numbers : ";
    cin>>a>>b>>c;

    int max = maximum(a,b,c);
    cout<<"The maximum no is : "<<max<<endl;
    return 0;
}