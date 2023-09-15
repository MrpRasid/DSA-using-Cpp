#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i] <<" , " <<arr[j]<<endl;
        }
        cout<<endl;
    }
}