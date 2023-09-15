#include<iostream>
using namespace std;

void rightShift(int arr[],int size){
    int temp = arr[size-1];
    for(int i=size-1;i>=1;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
int main(){
   int arr[] = {2,5,3,9,2,4};
   int size =sizeof(arr)/sizeof(arr[0]);

//    it will right shift the index element value not position
//    for(int i=0;i<size;i++){
//     cout<<(arr[i]>>1)<<" ";
//    }

rightShift(arr,size);


for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}