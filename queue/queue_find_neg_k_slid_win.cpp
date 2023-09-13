#include<bits/stdc++.h>
using namespace std;

// find first negative element in every window of k size in an array
// returns 0 if there is no negative element in that window

// sliding window concept  : memorise this code...many questions on this pattern 
void solve(int arr[],int n, int k){
    queue<int> q;                 // mostly we stored index value in queue bcz later we have to exclude also na
    // process first window of size k
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }

    // remaining window ko preocess kro
    for(int i=k;i<n;i++){             // ye i window ke last element ko point krta hai...
        // answer dedo purani window ka
        if(q.empty()){       // means no -ve element in that window
            cout<<0<<" "; 
        }else{
            cout<<arr[q.front()]<<" ";
        }

        // next window mein jaane ke liye ek element ko front se htana hai, back se insert krna hai (i) here
        // out of window elements ko remove krdo
        if((!q.empty()) && ((i-q.front())>=k)){
            q.pop();
        }
        //check current element for insertion
        if(arr[i]<0){
            q.push(i);
        }
    }
    // ans for last window
    if(q.empty()){       // means no -ve element in that window
        cout<<0<<" "; 
    }else{
        cout<<arr[q.front()]<<" ";
    }
}

int main(){
    int arr[]  ={12,-1,-7,8,-15,30,16,28};
    int size = 8;

    int k=3;
    solve(arr,size,k);


    return 0;
}
