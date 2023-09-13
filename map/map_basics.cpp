#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
#include<map>
using namespace std;

int main(){
    // creation of map
    map<int,char> meraMap;     // mapping   0-a, 1-b, 2-c, 3-d
    // insertion
    meraMap[0] = 'a';
    meraMap[1] = 'b';
    meraMap[2] = 'c';
    meraMap[25] = 'z';

    // access
    cout<<"Your ans is : "<<meraMap[23]<<endl;   // prints nothing...
    cout<<"Your ans is : "<<meraMap[2]<<endl;

    return 0;
}