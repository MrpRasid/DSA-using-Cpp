#include<iostream>
using namespace std;
int setBit(int n){
    int count = 0;
    while(n>0){
        int bit = n&1;

        // normal method
        // int bit = n%2;

        if(bit == 1){
            count++;
        }
        
        // n = n/2;
        n = n>>1;
    }
    return count;
}
int main(){
 int n;
 cout<<"Enter the number: ";
 cin>>n;

 cout<<"all set bit is: "<<setBit(n);
}