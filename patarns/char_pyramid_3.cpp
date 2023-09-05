#include<iostream>
using namespace std;
int main(){
    char ch;
    for(int i=0;i<4;i++){
        
        for(int j=0;j<i+1;j++){
             ch = j+1+'A' -1;
            cout<<ch<<" ";
        }
// trying to solve this using int for loop        *Did't able 
        // for(int j=0;j<i;j++){
        //      ch=j+1+'A'-1;
        //     cout<<ch<<" ";
        //     // cout<<"*";
        // }

        for(char alphabet =ch; alphabet>'A'; ){
            alphabet--;
            cout<<alphabet<<" ";
        }
       cout<<endl; 
    }
    // char ch =1+'A'-1;
    // cout<<++ch;
}