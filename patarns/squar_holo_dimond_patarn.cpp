#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        // first part stars left upper half
        for(int j=0;j<4-i;j++){
            cout<<"*";
        }
        for(int j=0;j<i+1;j++){
            cout<<"  ";
        }
        for(int j=0;j<4-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
 //  for(int j=0;j<4-i-1;j++) "it can use both if it then the dimond shape will small"
        for(int j=0;j<4-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}