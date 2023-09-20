#include<iostream>
using namespace std;

int dublicateSearch(int arr[],int n, int target){

     int s =0;
     int e =n-1;
     int ans = -1;
     while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == target){
            ans =mid;

            e = mid-1;
        }
        else if(target > arr[mid]){
            s = mid+1;
        }
        else if(target <arr[mid]){
            e = mid-1;
        }
     }
     return ans;
}

int main(){
    int arr[] = {10,20,30,30,30,40,30,50};
    int n=8;
    int target = 30;
    int indx = dublicateSearch(arr,n,target);

    cout<<indx;
}