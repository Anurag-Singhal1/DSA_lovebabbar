#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v){
    int n = v.size();
    // outer loop  -> n-1 rounds 
    for(int i=0;i<n-1;i++){             // last element to already sorted hi milega na
        int index = i;
        // inner loop  -> index of minimum element in range i->n
        for(int j=i+1;j<n;j++){
            if(v[index]>v[j]){
                index = j;              // finally index mein aage ke arr ka sbse chota ele ka index aa jaayega
            }
        }
        swap(v[i],v[index]);                        // swapping, har ek index pe uska right ele aa jaayega 
    }
}

int main(){
    vector<int> v {3,1,2,6,7,5,-1,2,0};

    selectionSort(v);

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    return 0;
}