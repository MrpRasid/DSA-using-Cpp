#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,0,1,1,0,0,0,1,0,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    // use two pointer's 

    int frst =arr[0];
    int lst = arr[size-1];
    // for(int i=0;i<size;i++){
    //     if(arr[])
    // }
    int zero=0;
    int one=0;
    for(int i=0;i<size;i++){
       if(arr[i]==0){
        zero++;
       } 
       if(arr[i]==1){
        one++;
       }
    }

    // cout<<zero<<" "<<one;

    // for(int i=0;i<size;i++){
        
    // }
    int index =0;

// zero-- mean's it will run the loop up to the zer count
    while(zero--){
        arr[index] =0;
        index++;
    }

    while(one--){
        arr[index]=1;
        index++;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}