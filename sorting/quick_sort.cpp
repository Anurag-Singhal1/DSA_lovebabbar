#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int s, int e){
    int pivot = v[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(v[i]<=pivot){
            cnt++;
        }
    }
    // place pivot at right place 
    int pivotIndex = s+cnt;
    swap(v[pivotIndex],v[s]);       // ab agar koi aur pivot ke = bhi hoga, wo left mein hi milega due to above = in cnt

    // handle left and right part, left mein all small and right mein all big
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(v[i]<=pivot){
            i++;
        }
        while(v[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(v[i++],v[j--]);               // swap hone ke baad, i++ and j-- 
        }
    }
    return pivotIndex;
}

void quickSort(vector<int> &v, int s, int e){               // & ka dhyan rkhan, bcz ussi vecotor mein change karana hai, and not in copy 
    if(s>=e){              // base case
        return;
    }
    // partition krenge
    int p = partition(v,s,e);

    // left part sort karo
    quickSort(v,s,p-1);
    // right part sort karo 
    quickSort(v,p+1,e);
}

int main(){
    vector<int> v{5,-4,8,7,1,8,7,1};
    int n  = v.size();

    quickSort(v,0,n-1);
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    return 0;
}