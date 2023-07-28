#include<bits/stdc++.h>
#include<unordered_map>
#include<map>                       // for simple ordered map - O(log n) - sorting order key values
#include<iostream>
using namespace std;

// BY STL
int main(){
    // creation
    unordered_map<string,int> m;

    // insertion 1
    pair<string, int> p= make_pair("Scorpio", 9);
    m.insert(p);

    // insertion 2
    pair<string, int> p2("Alto",2);
    m.insert(p2);

    // insertion 3                                 - follow this
    m["fortuner"] = 10;


    // access
    cout<<m.at("Alto")<<endl;                    // using at() function
    cout<<m.at("Scorpio")<<endl;

    // acess 2                                    - follow this
    cout<<m["fortuner"]<<endl;

    // search keys
    cout<<m.count("Scorpio") <<endl;                 // if preset, then gives 1
    cout<<m.count("Innova") <<endl;                 // if absent, then gives 0

    // searching using find function
    if(m.find("fortuner")!=m.end()){          // means search krte-krte end tk nhi pahuche, pehle hi mil gya
        cout<<"Fortuner found"<<endl;
    }
    else{
        cout<<"Not found" <<endl;
    }

    // size of map  and insert element during cout call
    cout<<m.size()<<endl;
    cout<<m["hummer"]<<endl;              // hummer ki key create kr dega and initialsie with 0 
    cout<<m.size()<<endl;

    // iterating on map
    cout<<"Printing all Entries  :  "<<endl;
    for(auto i : m){                                       // prints in lifo order
        cout<<i.first <<" -> "<<i.second<<endl;
    }

    return 0;
}