#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<string,int> mp;
    mp["a"] = 1;
    mp["b"] = 2;
    mp["c"] = 3;
    mp["d"] = 4;
    mp["e"] = 5;
    mp["f"] = 6;

    // unordered_map<string,int>::iterator it = mp.begin();
    auto it = mp.begin();                                // it points to address of 1st element of map

    while(it!=mp.end()){
        cout<< (*it).first <<" > "<<it->second <<endl;
        it++;
    }

    auto it2 = mp.find("c");              // now iterator it2 points to "c" key in map
    mp.erase(it2);

    cout<<"Again printing : ";
    // auto it3 = mp.begin();
    // while(it3!=mp.end()){
    //     cout<< (*it3).first <<" > "<<it3->second << "   ";
    //     it3++;
    // }cout<<endl;
 
    for(auto i : mp){            // here, it is not an iterator ( for-each loop : works w/o indexing ) 
        cout<<i.first  <<" -> "<<i.second<<"   ";
    }cout<<endl;

    return 0;
}