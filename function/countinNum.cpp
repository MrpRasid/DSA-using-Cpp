#include<iostream>
using namespace std;
void Number(int n){
for(int i=1;i<=n;i++){
    cout<<i<<endl;
}
}
int main(){
int number;
cout<<"Enter the number you want up to: ";
cin>>number;
Number(number);
}