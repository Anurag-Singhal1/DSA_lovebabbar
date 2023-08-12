#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// here we have n choco packets and m students, distribute 1 packet to each such that d/b max and min is min.
// Approach : very easy wahi sort and slide k size window

int main(){

    int n = 8;
    int m = 5;
    int arr[] = {3,4,1,9,56,7,9,12};

    // now, first sort
    sort(arr, arr+n);
    int i=0;
    int j=m-1;
    int diff = INT_MAX;
    while(j<n){
        int newDiff = arr[j]-arr[i];
        diff = min(diff, newDiff);
        j++;
        i++;
    }
    cout<<"Answer is : "<<diff<<endl;

    return 0;
}