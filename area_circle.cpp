#include<iostream>
using namespace std;

float area(float r){
    return 3.14*r*r;
}

int main(){

    float r ;
    cout<<"Enter the radius : ";
    cin>>r;

    cout<<"Area of Circle is : "<<area(r)<<endl;
    return 0;
}