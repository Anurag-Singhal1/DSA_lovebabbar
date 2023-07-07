class Solution
{
  public:
    bool possibleSol(int arr[],int n , int k,long long mid){
        long long timesum = 0;
        int c=1;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                return false;
            }
            if(timesum+arr[i]>mid){
                c++;
                timesum = arr[i];
                if(c>k){
                    return false;
                }
            }
            else{
                timesum+=arr[i];
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        long long s =0;
        // long long e = accumulate(arr,arr+n,0);
        long long e =0;
        for(int i=0;i<n;i++){
            e+=arr[i];
        }
        long long ans =-1;
        while(s<=e){
            long long mid = s +(e-s)/2 ;
            if(possibleSol(arr,n,k,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};