class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] ={0};

        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;  // to map a-0 and z-25
        }
        // now find the most ferquent character
        char max_freq_char ;
        int max_freq = INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>max_freq){
                max_freq = hash[i];
                max_freq_char = i+'a';
            }
        }
        // now, place the moat freq char
        int index = 0;
        while(max_freq>0 && index<s.size()){
            s[index] = max_freq_char;
            max_freq--;
            index+=2;
        }
        if(max_freq!=0){ // if max_fre_char is not placed in one go..then return empty string
            return "";
        }
        hash[max_freq_char - 'a'] = 0;  // means, i have placed the most frequent character....
        // lets place the rest of the characters

        for(int i=0;i<26;i++){
            while(hash[i]>0){
                index = index>=s.size() ? 1 : index;
                s[index] = i + 'a';
                index +=2;
                hash[i]--;
            }
        }
        return s;

    }
};