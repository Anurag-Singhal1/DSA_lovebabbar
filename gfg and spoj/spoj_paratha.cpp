#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

bool possibleSol(vector<int> cookRanks, int np, int mid){
    int currP = 0;  // initial cooked paratha count
    for(int i=0;i<cookRanks.size();i++){
        int r = cookRanks[i], j=1;
        int timeTaken = 0;
        while(true){
            if(timeTaken + r*j<=mid){
                currP++;
                timeTaken+=r*j;
                j++;
            }
            else{
                break;
            }
        }
        if(currP>=np){
            return true;
        }
    }
    return false;
}

int timeToCook(vector<int> cookRanks, int np){
    int s =0;
    int highestRank = *max_element(cookRanks.begin(),cookRanks.end());
    int e = highestRank*(np*(np+1)/2);
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(possibleSol(cookRanks,np,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int np,nc;
        cin>>np>>nc;
        vector<int> cookRanks;
        while(nc--){
            int r ;
            cin>>r;
            cookRanks.push_back(r);
        }
        cout<<timeToCook(cookRanks,np)<<endl;
    }
    return 0;
}