#include<iostream>
using namespace std;
void additionNumber(int n){
    int sum =0;
 for(int i=1;i<=n;i++){
    sum = sum+i; 
 }
 cout<<sum;
}
int main(){
int number;
cout<<"Enter the number: ";
cin>>number;
additionNumber(number);
}