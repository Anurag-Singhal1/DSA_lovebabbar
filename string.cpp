#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

bool compareString(string a, string b){
    if(a.length()!=b.length()){
        return false;
    }
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

// ERASE, REPLACE,FIND, COMPARE, SUBSTR...these all r imp.
int main(){
    string str;
    cin>>str; // here, not prints string after space
    // getline(cin,str);              // here, prints full line
    // cin.getline(str,50);        // this is only for char type...
    cout<<str<<endl;

    // VARIOUS STRING FUNCTIONS....
    cout<<"Length : "<<str.length()<<endl;     // strlen() is for char arrays only.
    cout<<"is string empty : "<<str.empty()<<endl;    // 0 -> false,  1-> true
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    // very imp substr function...
    cout<<str.substr(0,3)<<endl;           // here, 0 gives the starting index and 3 is length of substr
    cout<<str.substr(1,4)<<endl;
    cout<<str<<endl;
    // now, compare the 2 strings function...

    string a = "Love";
    string b = "Lover";     // l and L are also different...means these r case sensitive..
    // by our own function...
    if(compareString(a,b)==1){
        cout<<"a and b are exactly same strings.."<<endl;
    }else{
        cout<<"a and b are not the same.."<<endl;
    }
    // by string function....
    if(a.compare(b)==0){
        cout<<"a and b are exactly same strings.."<<endl;
    }else{
        cout<<"a and b are not the same.."<<endl;
    }

    // playing with compare function : 0, -1, 1
    string x = "cbcd";
    string y = "bacdffew";
    cout<<x.compare(y)<<endl;  // gives 1, bcz c is > than b ..here we see ASCII values...

    // FIND FUNCTION....
    string sentence = "Hello jee kaise ho saare";
    string target = "jee";
    string target2 = "every";
    cout<<sentence.find(target)<<endl;    // gives the index of the target starting point. here , 6...
    cout<<sentence.find(target2)<<endl;    // here not present so gives a very big value....

    if(sentence.find(target)==string::npos){    // if finds, then it returns nothing.
        cout<<"Not found "<<endl;              // npos means no position. 
    }
    if(sentence.find(target2)==string::npos){    // it prints not found.
        cout<<"Not found "<<endl;
    }


    // REPLACE PORTION OF A STRING....
    string anu = "Ram is my First Love.";
    string word = "Shree Ram";
    anu.replace(0,6,word);  // here, 0 - starting index, 6- no of characters to be replaced..
    cout<<anu<<endl;

    // ERASE ...
    string anur = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    anur.erase(10,16);    // here, 10 - starting index, 16- no of characters to be deleted...
    cout<<anur<<endl;

    return 0;
}
