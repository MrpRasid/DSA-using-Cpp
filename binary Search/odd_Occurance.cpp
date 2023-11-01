#include<iostream>
using namespace std;

int accurance(int arr[],int n){

    int s=0;
    int e = n-1;

    while(s<e){
        int mid = s + (e-s)/2;
        if(s==e){
            return s;
        }
        else if(mid%2 == 0){
            if(mid<n && arr[mid] == arr[mid+1]){
                s = mid+2; 
            }else{
                e =mid;
            }
        }
        else {
            if(arr[mid] == arr[mid+1]){
                e = mid-1;
            }else{
                s = mid+2;
            }
        }
    }
}
int main(){
    int arr[] = {10,10,2,2,3,5,5,20,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n;

    cout<<"The index is: "<<accurance(arr,n);
}