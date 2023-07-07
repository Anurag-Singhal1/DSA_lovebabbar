class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char hash[256] = {0};    // mapping of each char of language s to languaage t
        bool istCharsMapped[256]={0}; // stores if t[i] char already mapped with s[i].
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0 && istCharsMapped[t[i]]==0){
                hash[s[i]]=t[i];
                istCharsMapped[t[i]]=true;
            }
        }
        for(int i=0;i<s.size();i++){
            // if(char(hash[s[i]])!=t[i]){  // int hash tha na...so isme mapped t string ke chars ko char mein change kiya.
            //     return false;
            // }
            if(hash[s[i]]!=t[i]){  // int hash tha na...so isme mapped t string ke chars ko char mein change kiya.
                return false;
            }
        }
        return true;
    }
};