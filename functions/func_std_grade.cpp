#include<iostream>
using namespace std;

char grade(int marks){
    // if(marks >= 90){
    //     return 'A';
    // }
    // else if( marks >=80){
    //     return 'B';
    // }
    // else if(marks >= 70){
    //     return 'C';
    // }
    // else if(marks >=60){
    //     return 'D';
    // }
    // else{
    //     return 'E';
    // }

    switch(marks/10){
        case 10:
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        case 6: return 'D'; break;
        default : return 'E'; 
    }
}

int main(){
    int marks;
    // cout<<"Enter the marks : ";
    // cin>>marks;

    for(int i=0;i<=100;i++){
        cout<<"Grade for Marks "<<i<<" is : "<<grade(i)<<endl;
    }
    // char ans = grade(marks);
    // cout<<"Your grade is : "<<ans<<endl;
    return 0;
}