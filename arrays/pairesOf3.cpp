#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
    }
}