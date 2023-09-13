class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool possibleSol(int A[],int N, int M, int mid){
        int pagesum =0;
        int c = 1;
        for(int i=0;i<N;i++){
            if(A[i]>mid){
                return false;
            }
            if(pagesum+A[i] > mid){
                c++;
                pagesum=A[i];
                if(c>M){
                    return false;
                }
            }
            else{
                pagesum+=A[i];
            }
        }
        return true;
    }
    // function to find minimum no of pages...
    int findPages(int A[], int N, int M) // m is no of students and n is no of books..
    {
        if(M>N){
            return -1;
        }
        int s = 0;
        int e = accumulate(A,A+N,0);
        int ans=-1;
        
        while(s<=e){
            int mid = (s+e)>>1;
            if(possibleSol(A,N,M,mid)){
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