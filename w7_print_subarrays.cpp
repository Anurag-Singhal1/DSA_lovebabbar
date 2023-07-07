#include<bits/stdc++.h>      
using namespace std;

void printSubarray_util(vector<int> &v, int st, int e){
    // BASE CASE
    if(e==v.size()){
        return;
    }
    for(int i=st;i<=e;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    printSubarray_util(v,st,e+1);
}
void printSubarray(vector<int> &v){
    for(int st=0;st<v.size();st++){
        int e = st;
        printSubarray_util(v,st,e);
    }
}

int main(){

    vector<int> v{1,2,3,4,5};
    printSubarray(v);
    return 0;
}