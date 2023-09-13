class Solution {
public:
    bool possibleSol(vector<int>& stalls, int k, int mid){
        // can we place k cows, with at least mid distance between cows.
        int pos = stalls[0];
        int c =1;
        for(int i = 1;i<stalls.size();i++){
            if(stalls[i]-pos>=mid){
                pos = stalls[i];   // one more cow has been placed at ith position.
                c++;
            }
            if(c==k){           // if all the  cows has been placed.
                return true;
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int s = 0;
        int e = stalls[stalls.size()-1] - stalls[0];       // max pos - min pos
        int ans = -1;
        while(s<=e){
            int mid = (s+e)>>1;
            if(possibleSol(stalls,k,mid)){
                ans= mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
};