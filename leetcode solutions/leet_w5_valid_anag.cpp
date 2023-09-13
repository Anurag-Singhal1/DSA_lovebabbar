// simple sorting approach...
class Solution {
public:
    bool isAnagram(string s, string t) {
     sort(s.begin(),s.end())   ;
     sort(t.begin(),t.end());
    if(s==t){
         return true;
    }
    return false;
    }
};

// by hashing/freqtable approach...
class Solution {
public:
    bool isAnagram(string s, string t) {
    //  sort(s.begin(),s.end())   ;
    //  sort(t.begin(),t.end());
    // if(s==t){
    //      return true;
    // }
    // return false;
    // }

    int freqtable[256] = {0};
    for(int i=0;i<s.size();i++){
        freqtable[s[i]]++;
    }
    for(int i=0;i<t.size();i++){
        freqtable[t[i]]--;
    }
    for(int i = 0;i<256;i++){
        if(freqtable[i]!=0){
            return false;
        }
    }
    return true;
    }
};