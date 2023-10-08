#include<iostream>
using namespace std;

float circleRadious(float r){
    float radious = 3.14*r*r;

    return radious;
}
int main(){
    float r;
    cout<<"Enter the radious of the circle: ";
    cin>>r;

    cout<<"Radious is: "<<circleRadious(r);
}