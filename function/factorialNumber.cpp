#include<iostream>
using namespace std;
void factorial(int num){
    int fact =1;
    if(num==0 || num==1){
        fact =1;
    }else{
        for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    }
    
    cout<<fact;
}
int main(){
int n;
cout<<"Enter the number for factorial: ";
cin>>n;
factorial(n);
}