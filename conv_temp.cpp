#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the temp in celsius : ";
    cin>>n;

    cout<<"celsius into kelvin is : "<<(n+273.15)<<endl;
    cout<<"celsius into fahrenheit is : "<<(n*1.8)+32<<endl;
    return 0;
}