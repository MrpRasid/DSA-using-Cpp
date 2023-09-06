#include<iostream>
using namespace std;
float areaOfcircle(float rad){
    float area = 3.1415 *rad*rad;
    return area;
}
int main(){
 float rad;
 cout<<"enter the radious of the circle: ";
 cin>>rad;
 cout<<"area is: " <<areaOfcircle(rad);
}