class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for(int i=0;i<=n-m;i++){  // n-m.. bcz poori string search krni hai...
            for(int j=0;j<m;j++){
                if(needle[j]!=haystack[i+j]){ // sliding window technique....
                    break;
                }  
                if(j == m-1){  // means, poori string match ho gyi hai...
                    return i;
                }
            }
        }
        return -1;
    }
};