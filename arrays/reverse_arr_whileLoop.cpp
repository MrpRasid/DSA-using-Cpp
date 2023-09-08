#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int left =0;
    int right = size-1;
    while(left<=right){
        swap(arr[left], arr[right]);
        left++;
        right--;
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i] <<" ";
    }

}
int main(){
    int arr[6] = {3,4,6,7,8,9};

    reverse(arr,6);

}