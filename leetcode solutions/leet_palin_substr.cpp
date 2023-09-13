class Solution {
public:
    int expandAroundIndex(string s, int i , int j){
        int count = 0;
        while(i>=0 && j<s.size() && s[i]==s[j]){   // s[i]=s[j] means it is a palindrome substring
            count++;
            i--;  // i ko peeche, now we r further checking..
            j++;   // j ko aage
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;
        int  n = s.size();
        for(int i =0;i<n;i++){
            // odd case
            int oddans = expandAroundIndex(s,i,i);    // here, j also equal to i..odd case..same index pe hai
            count+=oddans;
            // even case
            int evenans = expandAroundIndex(s,i,i+1);  // i+1 is j index..
            count+=evenans;
        }
        return count;  // even and odd case dono ke count add hoke idhar aa jaayenge..
    } 
};