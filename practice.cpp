#include<iostream>
using namespace std;

// int main(){
//     // to map 1,2,3 with A,B,C....
//     // int ans = 3;
//     // char ch = ans + 'A' - 1;
//     // cout<<ch;

//     // int c = 1,2 ;
//     // cout<<c;


// }
int main(){
    int n;cin>>n;
    int32_t sum=0;
    for(int i=1;i<=n;++i){
        sum+=i;
    }
    cout<<sum<<endl;
	return 0;
}