#include<iostream>
using namespace std;
void refernece(int &b){
    b--;
    b*=5;
    cout<<b*2<<endl;
    b++;
    cout<<b<<endl;
}
int main(){
    int a=9;
    a++;

    refernece(a);
    cout<<a<<endl;
}