#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    for(int i=0;i<n;i++){
        int j;
        for( j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for( j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        j--;
        for(;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<j+1;
//         }
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }