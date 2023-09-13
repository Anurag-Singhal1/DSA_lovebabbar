class Solution {
public:
    int countPrimes(int n) {
        if(n==0){   // if we didnt provide with any number to count all primes below this...
            return 0;
        }
        int ans=0;
        vector<bool> prime(n,true);
        prime[0]=prime[1]=false;   // if n= 15, then 0 se 14 ..and 0 and 1 to prime nhi hai na..so false;
        for(int i=2;i<n;i++){
            if(prime[i]){  // if prime[i] is marked as true....    i.e, prime
                ans++;
                int j=2*i;   // i ka table initialize kr diya hai
                while(j<n){  // until i table completes..mark all multiples of i as false
                    prime[j]=false;
                    j+=i;  //2-4,6......3-6,9,12...  here i ka table chala diya hai
                }
            }
        }
        return ans;
    }
};