#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            if(i==0 || i==3){
                cout<<"* ";
            }else{

                if(j==0 || j==i){
                cout<<"* ";
            }else{
                cout<<"  "; // need two gap because * contain 2 gaps
            }
            }
                  
        }

        cout<<endl;
    }
}