#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

int main(){

    int arr[10]={0};
    cout<<arr<<" "<<&arr<<" "<<&arr[0]<<endl;   // all gives same address
    cout<<arr+1<<endl;

    // int* p = &arr;  
    // gives error ..baaki 2 mein arr and &arr[0] mein koi dikkat nhi.bcz base address hai and &arr: poore arr ka address de deta haii

    int (*p)[10] = &arr;   // array of pointers pointing to integers 
    cout<<p<<" "<<p+1<<endl;  // p+1 gives diff ans than arr+1...choro isse time waste haiii
    for(int i=0;i<10;i++){
        cout<<i<<" "<<(*p)[i]<<endl;
    }
    return 0;
}