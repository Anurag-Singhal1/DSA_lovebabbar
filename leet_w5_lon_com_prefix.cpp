class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        int  i=0;
        while(true){
            char curr_ch=0;
        
            for(auto str : strs){   // we using it to become modern instead of for loop..
                if(i>=str.size()){  // if size of any string is small.. out of bound
                    curr_ch = 0;
                    break;        // it breaks from while loop..
                }
                if(curr_ch==0){     // just started..
                    curr_ch = str[i]; // str[i] gives 1st char of 1st string....
                }
                else if(str[i]!=curr_ch){   // when checking 1st letter of next string..
                    curr_ch=0;
                    break;
                }
            }
            // if a char is same in all string.then above no condin for this..simply loop executes..
            if(curr_ch==0){
                break;         // it is breaking from while loop....
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }
};