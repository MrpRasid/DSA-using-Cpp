#include<iostream>
using namespace std;
void printMaximumNum(int num1, int num2, int num3){
    if(num1>=num2 && num1>=num3){
        cout<<"Maximum num is: " << num1<<endl;
    }
    else if(num2>=num1 && num2>=num3){
        cout<<"Maximum num is: " << num2 <<endl;
    }
    else{
        cout<<"Maximum num is: "<<num3<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"enter 1st number: ";
    cin>>a;
     cout<<"enter 2st number: ";
    cin>>b;

     cout<<"enter 3st number: ";
    cin>>c;

    printMaximumNum(a,b,c);

}