#include<iostream>
using namespace std;

void CheckNum(int n){
    for(int i=0;i<n;i++){
       
        for(int j=2;j<i-1;j++){
           
            if(i/j != 0){
                // cout<<"hello";
                cout<<i<<" ";
            }
        }
    }
  
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    CheckNum(n);

}