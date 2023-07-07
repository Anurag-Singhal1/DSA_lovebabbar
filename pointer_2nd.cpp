#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>           // for using functions like strlen()
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<arr<<endl;   // base address
    cout<<&arr<<endl;  // base address
    cout<<&arr[0]<<endl;  // base address
    cout<<*arr<<endl;  // 1....de-reference operator....POINTER CONCEPT
    cout<<arr[0]<<endl;  // 1
    cout<<*arr+9<<endl;  // 1+9 = 10
    cout<<*(arr+3)<<endl;  // 4
    cout<<arr[3]<<endl;  // 4   hence, arr[i] is same as *(arr+i)
    cout<<3[arr]<<endl;  // 4 

    // CHAR ARRAYS;
    char ch[7] ="Anurag"; // 7th char is null pointer..
    char* ptr=ch;
    cout<<ptr<<endl;  // Anurag and not address bcz...implementation of cout is different for int and char.

    return 0;
}