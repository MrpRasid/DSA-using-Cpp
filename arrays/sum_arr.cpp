#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Taking input: ";
    for(int i=0;i<5;i++){
        cout<<"Enter the number for index: "<<i <<endl;
        cin>>arr[i];
    }
    int sum =0;
    cout<<"Sum of the array: ";
    for(int i=0;i<5;i++){
        sum = sum+arr[i];
    }

    cout<<sum;
}