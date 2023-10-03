#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int s, int e){
    int mid = s + (e-s)/2;
    //copy values in 2 diff arrays and later merge these
    int len1 = mid-s+1;
    int len2 = e-mid;

    vector<int> first(len1);
    vector<int> second(len2);

    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i]=v[mainArrayIndex++];
    }
    // mainArrayIndex=mid+1;                              // apne app mid+1 ko hi point kr raha hoga filhaal 
    for(int i=0;i<len2;i++){
        second[i]=v[mainArrayIndex++];
    }
    // now merge 2 sorted arrays   (2 and 5 : 2 array hai dono no. sorted hi hai na)
    mainArrayIndex = s;
    int index1 = 0;
    int index2 = 0;
    while(index1<len1 && index2<len2){
        if(first[index1]<=second[index2]){
            v[mainArrayIndex++]=first[index1++];
        }else{
            v[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1){                    // agar koi bach gya hoga
        v[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        v[mainArrayIndex++]=second[index2++];
    }
}

void mergeSort(vector<int> &v,int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    merge(v,s,e);
}

int main(){
    vector<int> v {5,4,2,3,3,2,-1,-3,-1,11,10,11};
    int n = v.size();
    mergeSort(v,0,n-1);                 // s,e
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    return 0;
}