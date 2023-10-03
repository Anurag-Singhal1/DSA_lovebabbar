#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v){
    int n = v.size();

    for(int i=0;i<n-1;i++){               // n-1 rounds
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){             // n-i-1, bcz last mein biggest ele jaate jaayenge, phir unko to dobara check nhi krenge na 
            if(v[j]>v[j+1]){
                swapped = true;
                swap(v[j],v[j+1]);
            }
        }
        if(swapped==false){              // no swap,already sort ho chuka haii 
            break;
        }
    }
}

int main(){
    vector<int> v {5,-1,2,6,3};

    bubbleSort(v);
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    return 0;
}