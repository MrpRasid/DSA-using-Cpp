#include<iostream> 
using namespace std;

void pairs(int arr[3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i]<<","<<arr[j] << " ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = { 10,20,30};
  pairs(arr);
}