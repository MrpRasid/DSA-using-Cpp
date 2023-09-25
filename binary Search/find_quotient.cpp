// quotient is the vag fol of the number

#include<iostream>
using namespace std;
int divide(int num, int divisor){
    int s= 0;
    int e = num;
    int ans = -1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(mid*divisor == num){
            return mid;
        }
        else if(mid*divisor < num){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
            }
            return ans;
}
int main(){
    int num = 9;
    int divisor = 5;
    int dans = divide(abs(num),abs(divisor));

    if((num>0 && divisor <0) || (num<0 && divisor>0) ){
        dans = 0 - dans;
    }
    cout<<"The quotient is: "<< dans;
}