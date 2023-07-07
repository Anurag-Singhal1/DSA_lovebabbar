class Solution {
public:
    bool checkAlpha(char ch){
        if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(checkAlpha(s[i]) && checkAlpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!checkAlpha(s[i])){         // means false...i.e, s[i] is not a alphabet
                i++;
            }
            else{
                j--;
            }
        }
        return s;
    }
};