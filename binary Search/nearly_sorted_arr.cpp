#include<iostream>
using namespace std;
int targetArr(int arr[],int n, int target){
    int s = 0;
    int e = n-1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(target == arr[mid-1]){
            return mid-1;
        }
        else if(target == arr[mid]){
            return mid;
        }else if(target == arr[mid+1]){
            return mid+1;
        }else if(target>arr[mid]){
            s = mid+2;
        }else if(target<arr[mid]){
            e  = mid-2;
        }
    }

}
int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 20;
    int index = targetArr(arr,n,target);

    cout<<"The index is: "<< index;

}