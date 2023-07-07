#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

int main(){

    string str;
    cin>>str;

    int count = 0, n = str.size();
    for(int i=0;i<n;i++){
        string k;
        for(int j = i;j<n;j++){
            k += str[j];   // adding of string and a character..
            cout << k << " ";
            count++;
        }
        cout<<"\n";
    }
    cout<<"Total no of substrings : "<<count<<endl;

    // adding of the 2 strings...
    string ans = "anu";
    string res = "rag";
    cout << ans+res<<endl;          

    // gives next character even after adding integer but inside a bracket...
    char ch = (9 + 'a');
    cout << ch << '\n';          // gives j ,  a+9 = 10
    

    //ascii : how to map values like alphabets, characters to numbers -> a:0,  b:1,  etc...
    char ch1 = 'e';
    int b = ch1 -'a';
    cout << b << "\n";    // gives 4....e-a

    return 0;
}


//c++ basics or standard template library
// ascii conversion
//vector
//map
//set
//lower bound
// upper  bound

