#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>
using namespace std;

void convertIntoUpperCase(char name[]){
    int n = strlen(name);
    for(int i =0;i<n;i++){
        name[i]+= -'a'+'A';       // this method is better.
        // name[i]+= -32;            // both works, above and below..
    }
}

int main(){

    char name[100] = "anurag";
    convertIntoUpperCase(name);
    cout<<"Into Uppercase : "<<name<<endl;
    return 0;
}