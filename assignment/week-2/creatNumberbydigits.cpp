#include<iostream>
using namespace std;

int creatNumber(int numdigit){
    int num = 0;
    while(numdigit>0){
        int digit;

        cout<<"Enter the digit: "<<endl;

        cin>>digit;

        num = num*10 +digit;
        cout<<"The number created so far: "<<num<<endl;
        numdigit--;
    }
    return num;
}

int main(){

    int n;
    cout<<"Enter the number of digits: "<<endl;
    cin>>n;

    cout<<"The number is: "<<creatNumber(n);


}