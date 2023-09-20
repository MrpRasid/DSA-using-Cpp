#include<iostream>
using namespace std;

int biSearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target>start){
            start = mid+1;
        }
        else if (end<target){
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int indx =9;
    int target = 70;

    int ans = biSearch(arr,indx,target);

    if(ans== -1){
        cout<<"Invalid searching";
    }else{
        cout<<"Index position is: "<<ans;
    }
}