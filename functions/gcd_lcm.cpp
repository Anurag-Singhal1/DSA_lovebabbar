#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

// BY EUCLID ALGORITHM....
int main(){
    int a,b;
    cout<<"Enter ur a and b values : ";
    cin>>a>>b;
    int x=a;
    int y=b;

    if(a==0) return b;
    if(b==0) return a;

    while(a>0 && b>0){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    int ans = a==0?b:a ;  // agar a 0 ho gya to b dedo...vrna a hi dedo...
    cout<<"GCD of a and b is : "<<ans<<endl;
    cout<<"LCM of a and b is : "<< (x*y)/ans <<endl;
    return 0;
}