#include<iostream>
using namespace std;
void rightShift(int arr[],int size){
    int k=2;
    int brr[k];
    for(int i=0;i<k;i++){
        brr[i] = arr[size-i-1];
    }
    // int temp = arr[size-1];

    for(int i=size-1;i>0;i--){
        arr[i]= arr[i-k];
    }

    for(int i=0;i<k;i++){
        arr[i] = brr[i];
    }
    // arr[0] = temp;
}
int main(){
    
   int arr[]= {3,4,5,6,8,9,3};
int size = sizeof(arr)/sizeof(arr[0]);

rightShift(arr,size);
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
}