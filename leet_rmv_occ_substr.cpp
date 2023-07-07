class Solution {
public:
    string removeOccurrences(string s, string part) {
        // by using only find and erase function..
        int pos = s.find(part); // finding position of occurence of given substring
        while(pos!=string::npos){ // until we got the no position/index for given substring
            s.erase(pos,part.length());      // remove that substring part from the string
            pos = s.find(part);               // again, update the position index value
        }
        return s;          // return the remaining string after erasing all occurences.
    }
};