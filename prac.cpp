#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

// #include<bits/stdc++.h>      
// using namespace std;

int main(){

    // cout<<INT_MIN<<endl;
    // cout<<INT_MAX<<endl;

    /* int n;
    if(cin >> n){
        cout<<"Anurag";
    } */

    // factorial...
    /* int n;
    cin>>n;
    int ans=1;
    while(n>0){
        ans*=n;
        n--;
    }
    cout<<ans; */

    // finding pivot element
    /* int arr[] = {1,2,3,4,5,2,3};
    int n = 7;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            cout<<arr[i];
            break;
        }
    } */

    // sorting by STL : SORT() function....
    /* vector<int> v {6,7,10,-1,0,5};
    sort(v.begin(),v.end());
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl; */

    // storing 'a' & 'A' in int array..
    /* vector<int> v ;
    v.push_back('a');    // stores 97
    v.push_back('A');    // stores 65
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl; */

    // cout<<'A'+1;   // gives an integer
    // cout<<char('A'+1);  // gives B 
    
    // int c = 0647 ;
    // cout<<c<<endl;    // gives 423 due to octal address

    // vector<int> v(7);
    // v[0]=6;   // we can take input like this if we initialise the size before ...here (7)
    // cout<<v[0];

    // printing with quotation mark ""
    // cout<<" My name is \""<<"Anurag Singhal"<<"\""<<endl;

    // printing first AND last occurences of a char in an char string
    // char s[] = "abcddegx";
    // char ch = 'd';
    // cout<<strchr(s,ch)<<endl;  // return string from first occurence
    // cout<<strrchr(s,ch)<<endl;  // returns string from last occurence

    

    return 0;
}





