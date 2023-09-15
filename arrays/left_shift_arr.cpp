#include<iostream>
using namespace std;

void leftShift(int arr[],int size){
    int temp = arr[0];

    for(int i=0;i<size;i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
}
int main(){
   int arr[] = {2,5,3,9,2,4};
   int size =sizeof(arr)/sizeof(arr[0]);

leftShift(arr,size);


for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}