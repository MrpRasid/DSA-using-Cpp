#include<iostream>
#include<cmath>
using namespace std;

int binaryNumber(int n){
int i=0;
int binary =0;
while(n>0){
   int bit = n%10; 
    binary = binary+ bit * pow(2, i++);
    n = n/10;
}
return binary;
}
int main(){
    int n;
    cout<<"Enter binary Number: ";
    cin>>n;
   cout<< binaryNumber(n);


}