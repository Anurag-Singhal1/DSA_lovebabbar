#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getithBit(int n, int i){
    int mask = 1 << i;
    int ans = n & mask;
    if(ans == 0){
        return 0;
    }else{
        return 1;
    }
}
void setithBit(int n, int i){
    int mask = 1 << i;
    int ans = mask | n;
    cout<<"After Setting : "<<ans<<endl;
}

void clearithBit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;                // we dont use mask as (1<<i) and then xor(^)bcz ye 0 bit ko 1 bna deta
    // cout<<"Clearing the Bit : "<<n<<endl; 
}

void updateithBit(int &n, int i, int target){
    clearithBit(n,i);
    int mask = target << i;
    n = n | mask;
    cout<<"Updating the bit : "<<n<<endl;
}
void clearLastIBits(int n, int i){
    int mask = -1<<i;
    n = n & mask;
    cout<<"After clearing last i bits : "<<n<<endl;
}

void powerOfTwo(int n){
    if((n & (n-1))==0){
        cout<<"Yes, power of 2"<<endl;
    }else{
        cout<<"Not a power of 2 "<<endl;
    }
}
 
int countSetBits(int n){
    int count = 0;
    while(n){                   // until n becomes 0
        int lastbit = n&1;
        if(lastbit==1){
            count++;
        }
        n = n>>1;              // removing the rightmost bit
    }
    return count;
}

int countSetBitsFast(int n){
    int count = 0;
    while(n){                   
        n = n & (n-1);              // removes last set bit
        count++;
    }
    return count;
}

int clearBitsInRange(int n, int i, int j){
    int a = -1<<(i+1);
    int b = (1<<j)-1;
    int mask = a | b;
    int ans = n & mask;
    return ans;
}

int main(){
    // int ans = getithBit(10,1);          // 1010    gives  1
    // cout<<"Getting bit : "<<ans<<endl;

    // setithBit(10,2);                        //  14   , 1010   -> 1110 (14)
    // clearithBit(10,1);                     // 8  , 1000

    // int n=10;
    // updateithBit(n,0,1);

    // clearLastIBits(7,2);                       //4

    // powerOfTwo(6);

    // cout<<"No of set bits are : "<<countSetBits(15)<<endl;
    // cout<<"No of set bits are : "<<countSetBitsFast(15)<<endl;

    cout<<"Clearing bits in an range : "<<clearBitsInRange(15,2,1);  // 1111 becomes 1001 i.e, 9

    return 0;   
} 