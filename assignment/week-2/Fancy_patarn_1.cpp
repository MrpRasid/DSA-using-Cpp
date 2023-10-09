#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=0;i <n;i++){
        int num = i+1;
        int num_start = 8-i;
        int num_count = num;
        for(int j=0;j<17;j++){
            if(j==num_start && num_count>0){
                cout<<num;
                num_start+=2;
                num_count--;
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}