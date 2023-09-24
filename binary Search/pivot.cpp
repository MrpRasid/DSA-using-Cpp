#include<iostream>
#include<vector>
using namespace std;
int pivotfun(vector<int>& arr){
 int s = 0;
 int e = arr.size();

 while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]>arr[mid+1]){
        return mid;
    }
    else if(arr[mid]<arr[mid-1]){
        return mid-1;
    }
    else if(arr[mid]<arr[0]){
        e = mid -1;
    }
    else if(arr[mid]>arr[0]){
        s = mid+1;
    }
 }
 return -1;
}

int main(){
    vector<int> arr;
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(3);
    arr.push_back(4);
    int num = pivotfun(arr);
    cout<<"pivot is: "<< num;
}
