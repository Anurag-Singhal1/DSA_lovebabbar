#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int n=5;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<"  ";
//         }
//         int k = i+1;
//         for(int j=0;j<=i;j++){
//             cout<<k++<<" ";
//         }
//         int x = k-2;
//         for(int j=0;j<i;j++){
//             cout<<x--<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }

//----------------------------------------------------------------------------------------

int main(){
    int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i+1;j++){
            if(i!=n-1){
                    if(j==1){
                    cout<<j;
                }else if(j==2*i+1){
                    cout<<i+1;
                }else{
                    cout<<" ";
                }
            }else{
                for(int j=1;j<=n;j++){
                    cout<<j<<" ";
                }
                break;
            }
        }
        cout<<endl;
    }

    return 0;
}