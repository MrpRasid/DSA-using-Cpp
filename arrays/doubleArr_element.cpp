#include<iostream>
using namespace std;
int main(){
    int arr[10] ;
    int n=10;
    for(int i=0;i<n;i++){
        cout<<"Enter the value for index: " << i <<endl;
        cin>>arr[i];
    }
    
    cout<<"The out put are : ";

    for(int i=0;i<n;i++){
        arr[i] = arr[i] *2;
       
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}