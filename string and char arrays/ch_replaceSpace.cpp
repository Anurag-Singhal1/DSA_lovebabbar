#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>
using namespace std;

void replaceSpaces(char sentence[]){
    int n = strlen(sentence);
    for(int i=0;i<n;i++){
        if(sentence[i]==' '){
            sentence[i]='@';
        }
    }

}

int main(){

    char sentence[100];
    cin.getline(sentence,100);
    replaceSpaces(sentence);
    cout<<"After replacing : "<<sentence<<endl;
    return 0;
}