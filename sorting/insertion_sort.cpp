#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v){
    int n = v.size();
    
    for(int i=1;i<n;i++){                      // here also n-1 rounds 
        int val = v[i];                           // fetch the val
        int j;
        for(j=i-1;j>=0;j--){                   // i-1 se leke 0 index tak check krenge 
            if(v[j]>val){                          // comparing the val
                v[j+1]=v[j];               //  shifting the val , many shifting bhi ho skti hai idhar until breaks or loop ends
            }else{
                break;                 // this break plays imp role.
            }
        }
        v[j+1]=val;                   // now copy our fetched val to its right position
    }
}

int main(){
    vector<int> v {2,-3,0,5,9,15};
    insertionSort(v);
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    return 0;
}

// hum jaise ye i ka index badhate jaayenge, hamra peeche wala array sort hota jaayega. bs phir iss i wale 
//ko iski right posin pe daalna rahega, uske liye jitni bhi value shifting hogi wo krenge and then apni i
// index val ko copy kr denge at its right posin.