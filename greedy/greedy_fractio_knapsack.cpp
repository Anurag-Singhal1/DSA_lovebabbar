#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// it is different from 0-1 knapsack, here we can also take in fraction
// APPROACH : here, we sort hte vslues after finding value/weight ratio.

bool cmp(pair<int,int> a, pair<int,int> b){
    double ratio1 = ((1.0)*a.first)/a.second;          // *1 so that we can get the decimal value
    double ratio2 = ((1.0)*b.first)/b.second;
    return ratio1  > ratio2;
}
int main(){

    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int n=3;
    int capacity = 50;

    vector<pair<int,int> > data;
    for(int i=0;i<n;i++){
        data.push_back({val[i],wt[i]});
    }
    sort(data.begin(), data.end(), cmp);                // sort val/weight ke basis pe kiya haii

    int totalValue = 0;
    // check for each item
    for(int i=0;i<n;i++){
        int itemValue = data[i].first;
        int itemWeight = data[i].second;

        if(itemWeight <= capacity){                   // entire inclusion
            totalValue+=itemValue;
            capacity-=itemWeight;
        }else{                                        // fractional inclusion
            double ratio = ((1.0)*itemValue)/itemWeight;
            totalValue+=ratio*capacity;
            break;                                                // capacity becomes 0
        }
    }
    cout<<"Ans is : "<<totalValue<<endl;

    return 0;
}