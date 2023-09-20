#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int> > v){
    int m =v.size();                                      // row 
    int n= v[0].size();                                   // col 

    for(int startcol=0;startcol<n;startcol++){
        if((startcol&1)==0){                            // even - 0,1,2 means top to bottom 
            for(int i=0;i<m;i++){
                cout<<v[i][startcol]<<" ";
            }
        }
        else{                                            // odd -> bottom to top 
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){

    vector<vector<int> > v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wavePrintMatrix(v);
    return 0;
}