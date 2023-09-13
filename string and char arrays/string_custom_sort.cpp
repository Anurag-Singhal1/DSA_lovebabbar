#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

// it compares between the character of the strings...
bool cmp(char first, char second){
    return first<second;        // if 1st<2nd then returns true...otherwise false...i.e,ascending order
    // return first>second;        // descending order
}

bool compare(int a, int b){     // here int type bcz.. vector has integer values...
    return a>b;      // desceding order..
}

int main(){

    string s = "Anurag";           // character sort
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;          // ascending order

    vector<int> v{5,3,1,2,4};        // integer sort
    sort(v.begin(),v.end(),compare);
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    vector<string> str{"anurag@123","singhal","khushi","hello"}; // string sort
    sort(str.begin(),str.end());
    for(auto i:str){
        cout<<i<<" ";                  // sort  by     a,b,c,d.....
    }cout<<endl;

    return 0;
}