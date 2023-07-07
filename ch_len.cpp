#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>
using namespace std;

int len(char name[]){
    int length = 0;
    int i =0;
    while(name[i]!='\0'){      // until ith char is not equal to null char..
        length++;
        i++;
    }
    return length;
}

int main(){

    char name[100];
    cin>>name;
    cout<<"Length is : "<<len(name)<<endl;
    cout<<"Length is : "<<strlen(name)<<endl;
    return 0;
}