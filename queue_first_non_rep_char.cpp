#include<bits/stdc++.h>
using namespace std;

// t.c. o(n)    s.c. o(n) bcz of queue
// gfg - first non repeating character in a stream
// every step pe shuru se check kro jaake, jo unique hai usko sbme daaldo, if no unique then insert #
string solve(string &str){
    int freq[26] = {0};   // 0 maps to a, 1 maps to b, and 25 maps to z
    queue<char> q;       // queue is used to track characters ... FIFO ordering, gives first unique

    string ans="";

    for(int i=0;i<str.size();i++){
        char ch = str[i];

        // increment frequency
        freq[ch-'a']++;         // ek baar jiski frequency store ho gyi bs ho gyi, ye kam nhi hogi ab 
        // now pushing into queue
        q.push(ch);

        while(!q.empty()){             
            // repeating character
            if(freq[q.front()-'a']>1){    // here frequency check of front element of queue
                q.pop();      // queue front se pop kr rahe, but freq array mein frequency to as it is haina 
            }
            // non-repeating character
            else{                          // freq = 1 of front element
                ans.push_back(q.front());
                break;
            }
        }
        
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}

int main(){
    // string str = "aabc";
    // string str = "aaa";
    string str = "zarcaazrd";
    // string str = "zarraaz";
    
    cout<<"Final Ans is : "<<solve(str)<<endl;

    return 0;
}