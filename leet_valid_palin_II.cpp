class Solution {
public:
    bool checkPalindrome(string s, int i , int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i =0;
        int j = s.length()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                //ek baar i ko remove , ek baar j ko remove
                // 1st case mein i ko remove kr diya and ab i+1 se j tk check  kr rahe
                // 2nd case mein j ko remove kr diya and ab i se j-1 tk check kr rahe
                return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
            }
            else{
                i++;
                j--;
            }
        }
        return true;  // its already a palindrome
    }
};