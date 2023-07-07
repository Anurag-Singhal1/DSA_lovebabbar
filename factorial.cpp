#include <iostream>
using namespace std;

int main(){
	int n;
    cin>>n;

    int fact = 1;
    for(fact= 1;n>=1;n--){
        fact*=n;
    }
    cout<<fact<<endl;
}