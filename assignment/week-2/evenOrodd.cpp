#include<iostream>
using namespace std;
// check even or odd number using bit wise method

bool eveOdd(bool n){
    if((n&1) == 0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter the the number: ";
    cin>>n;

    bool iseven = eveOdd(n);

    if(iseven){
        cout<<n<<" is even number";
    }else{
        cout<<n << " is odd number";
    }

}