#include<iostream>
#include<vector>
#include<algorithm>         // for using binary search : STL
#include<cstring>
using namespace std;

int main(){

    //   CIN >> CHAR VALUE...
    // char name[100];
    // cout<<"Enter ur name : ";
    // cin>>name;
    // cout<<"Your name is : "<<name<<endl;

    // BY SINGLE CHARACTER at a time....
    // char ch[100];
    // ch[0] = 'a';
    // ch[1] = 'b';
    // cin>>ch[2];
    // cout<<ch[0]<<ch[1]<<ch[2]<<endl;

    // NULL CHARACTER ART THE END OF THE CHAR ARRAY....
    // char name[100];
    // cin>>name;
    // for(int i=0;i<7;i++){
    //     cout<<"Index : "<<i<<" Value is : "<<name[i]<<endl;
    // }
    // int value = (int)name[6];      // typecasting char value into int (or) getting ASCII value of char...
    // cout<<"value is : "<<value<<endl;           // value is null character i.e, is 0 value

    // ONLY PRINTS INITIAL 3 LETTERS AND ALSO NOT THE NULL CHARACTER....
    // char name[3];
    // cin>>name;
    // for(int i=0;i<3;i++){
    //     cout<<name[i]<<" ";
    // }

    // spsce dont counts...
    // char ch[100];
    // cin>>ch;
    // cout<<ch;

    // GETLINE FUNC. to print full line/ name with space also
    char ch[100];
    cin.getline(ch,50,'k');     // here , 50 is max input size taht we r giving...'k' is delimitor. 
    cout<<ch;

    return 0;
}