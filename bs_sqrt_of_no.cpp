#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

int sqrtBinary(int target){
    int s =0;
    int e = target;           // (target -1 ) lelo, same ans : no difference
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        if(target>mid*mid){
            ans=mid;          // right search , and storing the values, bcz we here returning only int value
            s = mid+1;       // so ye bhi hamra ans ho skta hai....target 30, 5*5=25<30, store 5 & search right
        }
        else{
            e = mid-1;
        }
        mid = s +(e-s)/2 ;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter your number : ";
    cin>>n;

    int ans = sqrtBinary(n);
    cout<<"Ans is : "<<ans<<endl;

    int precision;
    cout<<"Upto which decimal point u want precison : ";
    cin>>precision;

    double step =0.1;
    double finalans = ans;
    for(int i=0;i<precision;i++){      // upto no of decimal places
        for(double j=finalans;j*j<=n;j+=step){
            finalans = j;
        }
        step/=10;        // 0.1 ko 0.01 bnane ke liye and so on.....
    }
    cout<<"Final ans is : "<<finalans<<endl;
    return 0;
}

// agr hum isme ans variable mein answer store na karaye, then phir ans hi nahi aayega, qki int mein hai, and 
// exact to aayega hi nhi........DRY RUN IS THE SOLUTION TO EVERY QUESTION...