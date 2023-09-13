#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>
using namespace std;

bool checkPalindrome(char word[]){
    int i = 0;
    int n = strlen(word);
    int j = n-1;
    while(i<=j){
        if(word[i]==word[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    char word[100];
    cin>>word;
    // cout<<"Answer is : "<<checkPalindrome(word)<<endl;
    int ans = checkPalindrome(word);
    if(ans==1){
        cout<<"It is a Palindrome. ";
    }else{
        cout<<"It is not a Palindrome.";
    }
    return 0;
}