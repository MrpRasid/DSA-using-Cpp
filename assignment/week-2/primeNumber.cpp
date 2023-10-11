#include<iostream>
using namespace std;

bool CheckNum(int n){
  for(int i=2;i<n;i++){
    if(n%i == 0){
        return false;
    }
  }
  return true;
  
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

   bool isPrime = CheckNum(n);
   if(isPrime){
    cout<<n<<" is a prime number";
   }else{
    cout<<n<<" is not a prime number";
   }

}