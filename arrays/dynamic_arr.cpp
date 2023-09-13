#include<iostream>
using namespace std;
int main(){
    // a dynamic array 
    int b;
    cout<<"Enter the arr index: ";
    cin>>b;
    int *n =new int[b];
    for(int i=0;i<b;i++){
        cin>>n[i];
    }
    cout<<"Answer is:";
    for(int i=0;i<b;i++){
        cout<<n[i]<<endl;
    }
}