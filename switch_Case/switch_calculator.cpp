#include<iostream>
using namespace std;
int main(){
     double a,b;
    cout<<"Enter two number for calculation: ";

    cin>>a;
    cin>>b;

    char ch ;
    cout<<"Enter the symbol you want to do: ";
    cin>>ch;

    double ans;

//  switch expression must should be integral value.
// integral values are those which are represent whole number.
    switch(ch){
        case '+': ans = a+b;
        break;

        case '-' : ans = a-b;
        break;

        case '*' : ans = a*b;
        break;

        case '/' : ans = a/b;
        break;

        default: cout<<"Invalid operation";
        return 0;
    }

    cout<<"The answer is: " << ans;

    return 0;
}