#include<iostream>
using namespace std;
int main(){
    // int and int division 
    int a=10;
    int b=3;
    float c = a/b;

    // answer will be 3 not 3.33 because int/int will give int 
    cout<<"int into float is: "<< c <<endl;


    // 2 float to char

    float floatingNum =68.6;
    // this .6 will elemenete the number will act as intiger
    char charvalu = floatingNum;
    cout<<"The char value is: " <<charvalu<<endl;

    // int/int into a float
    int x=10;
    int y=3;
    // if any of the int become the float the the answer will be float
    float z =((float)x)/y;
    cout<<"The float is: "<< z<<endl;

    // the condition for be float and intiger are :
    // i> int/int = int 
    // ii> int/float = float
    // iii> float/float = float
}