#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<4-i;j++){
            if(j==0 || j==4-i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}