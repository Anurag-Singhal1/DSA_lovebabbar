#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// min price se saari lollipop kharidni haii
int main(){
    int n=6;
    int prices[]  = {2,8,6,9,4,7};                 // just buy 2 and 4 rupee lollipop

    sort(prices,prices+n);
    int buy=0;
    int free = n-1;
    int price = 0;

    while(buy<=free){
        price+=prices[buy];
        buy++;
        free--;
        free--;
    }
    cout<<"Ans is : "<<price<<endl;

    return 0;
}