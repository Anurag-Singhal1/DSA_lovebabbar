#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>
using namespace std;

void reverse(char name[]){
    int i=0;
    int n = strlen(name);
    int j = n-1;
    // while(i<=j){
    //     swap(name[i],name[j]);
    //     i++;
    //     j--;
    // }
    for(;i<=j;i++){   // by for loop..
        swap(name[i],name[j]);
        // i++;
        j--;
    }
}

int main(){

    char name[100];
    cin>>name;
    reverse(name);
    cout<<"After reversing : "<<name<<endl;
    return 0;
}