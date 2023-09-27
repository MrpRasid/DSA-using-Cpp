#include<iostream>
using namespace std;

int uniqueEliment(int arr[], int n){
    int s=0;
    int e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(s==e){
            return s;
        }

        if(mid%2==0){
            if(arr[mid] == arr[mid+1]){
                s = mid+2;
            }else{
                e = mid;
            }
        }else{
            if(arr[mid] == arr[mid+1]){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }

    }
}
int main(){
int arr[] = {2, 10,10,20,20,7,7,8,8};

int n = sizeof(arr)/sizeof(arr[0]);
int element = uniqueEliment(arr,n);
cout<<"The number is: "<<arr[element];
 
}