#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
using namespace std;

// same approach as sqrt...here we store ans and move right, s = mid+1
int solve(int dividend, int divisor){
    int s =0;
    int e = abs(dividend);
    int mid = s + (e-s)/2 ;
    int ans = -1;

    while(s<=e){
        if(abs(mid*divisor) == abs(dividend)){        // abs we used to make it +ve value.
            ans = mid;
            break;
        }
        if(abs(mid*divisor)<abs(dividend)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    if((divisor>0 && dividend>0)|| (divisor<0 && dividend<0))     // either both +ve or -ve
        return ans;
    else
        return -ans;
}

int main(){

    int dividend = -22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout<<"Ans is -> : "<<ans<<endl;

    int precision;
    cout<<"Enter the value upto which u want precision in ans : ";
    cin>>precision;

    double finalans = ans;
    double step = 0.1;
    for(int i=0;i<precision;i++){
        for(double j=finalans;abs(j*divisor)<=abs(dividend);j+=step){
            finalans = j;
        }
        step/=10;
    }
    cout<<"Final ans is : ";
    if((divisor>0 && dividend>0)|| (divisor<0 && dividend<0))     // either both +ve or -ve
        cout<< finalans;
    else
        cout<< -finalans;

    return 0;
}