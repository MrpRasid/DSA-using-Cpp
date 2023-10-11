#include<iostream>
using namespace std;

bool checkNum(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=2;i<n;i++){
        bool isprime = checkNum(i);
        if(isprime){
            cout<<i<<" ";
        }
    }
    
}