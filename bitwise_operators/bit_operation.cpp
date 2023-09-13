#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st value: ";
    cin>>a;
    cout<<"Enter 2nd value: ";
    cin>>b;

    cout<<"And operation: "<<(a&b)<<endl;

    cout<<"Or operation: "<<(a|b)<<endl;

    cout<<"XOR operation: "<<(a^b)<<endl;

}