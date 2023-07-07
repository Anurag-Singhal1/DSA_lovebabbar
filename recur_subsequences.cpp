#include<bits/stdc++.h>      
using namespace std;

void subsequences(string str,string output,int i,int n){
    // base case
    if(i==n){
        cout<<"Ans is : "<<output<<endl;
        return;
    }
    // exclude
    cout<<"Bfore excluding (Output is :"<<output<<") "<<"  (i is : "<<i<<") "<<endl;
    subsequences(str,output,i+1,n);
    // include
    // output.push_back(str[i]);      
    cout<<"Bfore including (Output is :"<<output<<") "<<"  (i is : "<<i<<") "<<endl;
    subsequences(str,output+str[i],i+1,n);
}

int main(){

    string str = "abc";
    string output="";
    int i=0;
    int n = str.length();

    subsequences(str,output,i,n);

    return 0;
}