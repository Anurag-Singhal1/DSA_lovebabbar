#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

bool possibleSol(vector<long long int> trees,long long int n , long long int mid){
    long long int woodCollected = 0;
    for(long long int i=0;i<trees.size();i++){
        if(trees[i]>mid){
            woodCollected+=trees[i]-mid;
        }
    }
    return woodCollected>=n;   // if woodCollected is greater than what we wanted then return true.
}

long long int maxSawBlade(vector<long long int> trees,long long int n){
    long long int  s  = 0;
    long long int e = *max_element(trees.begin(),trees.end());
    long long int ans =-1;
    while(s<=e){
        long long int mid = s + (e-s)/2;
        if(possibleSol(trees,n,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main(){

    long long int m , n, ans = -1;
    cin>>m>>n;
    vector<long long int> trees;
    while(m--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }
    cout<<maxSawBlade(trees, n)<<endl;
    return 0;
}