#include<iostream>
using namespace std;

int main(){
 int arr[] = {9,7,-6,-5,7,-12,8,-25};
 int size = sizeof(arr)/sizeof(arr[0]);
 int j=0;
 for(int i=0;i<size;i++){
    if(arr[i]<0){
        swap(arr[i],arr[j]);
        j++;
    }
 }

 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 }
}