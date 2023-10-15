#include<iostream>
using namespace std;
// right shift
 int kshift(int arr[], int size){
    // for(int i=size-1;i>=size-k;i--){
    //     int temp[] = arr[i];
    // }
    int temp[3];
    for(int i=0;i<3;i++){
         temp[i] = arr[size-i-1];
    }
   
    // int temp = arr[size-1];

    for(int i=size-1;i>0;i--){
        arr[i] = arr[i-3];
    }

    for(int i=0;i<3;i++){
        arr[i]= temp[i];
    }
//    arr[0]= temp;
    return arr[size];
 }

int main(){
    int arr[] = {2,3,4,5,6,7,8,9,12,18};
    int size = sizeof(arr)/sizeof(arr[0]);
    // int k = 3;
    kshift(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }

}