class Solution {
public:
    static bool mycomp(string a , string b){
        string t1 = a+b;
        string t2 = b+a;
        return t1>t2;  // 30,3 ----- 330 and 303..returns the bigger
    }
    string largestNumber(vector<int>& nums) {
        vector<string> x;
        for(auto i:nums){
            x.push_back(to_string(i));   // to convert all int to string to sort lexicographically
        }
        sort(x.begin(), x.end(),mycomp); // it sorts in descending order..

        if(x[0]=="0"){  // means 0 is the highest element in array..bcz all are +ve numbers
            return "0";
        }
        string ans="";
        for(auto i:x){
            ans+=i;
        }
        return ans;
    }
};