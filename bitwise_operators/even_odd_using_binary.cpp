#include<iostream>
using namespace std;
    int checkNum(int n){
        int bit = n&1;
        return bit;
    }
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num = checkNum(n);
    if(num==0){
        cout<<"is a even number";
    }else{
        cout<<"is a odd number";
    }
}