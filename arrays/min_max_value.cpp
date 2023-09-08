#include<iostream>
#include<limits.h>
using namespace std;
int findMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0;i<5;i++){
        // logic for the min value
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int finddMax(int arr[], int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }

    }
    return max;
}

int main(){
    int arr[5] = {78,65,23,45,34};
    cout<<"Min value is: ";
    cout<<findMin(arr,5) <<endl;

    cout<<"Max value is: ";
    cout<<finddMax(arr, 5);
}