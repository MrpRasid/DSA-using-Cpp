#include<iostream>
using namespace std;

float parameters(int n){
    float mile = n*0.621371;

    return mile;
}

 void temprature(float c){
    float f = c*9/5+32;

    cout<<f;
    // return f;
}
int main(){
    // cout<<"Enter KM to get miles: ";

    // float n;
    // cin>>n;

    // cout<<"Mile is: "<<parameters(n)<<endl;


    // fahrenheit to celsius
    cout<<"Enter celsius: ";
    float c;
    cin>>c;
    
    // cout<<"Fahrenheit is: "<<temprature(c);

    temprature(c);


}