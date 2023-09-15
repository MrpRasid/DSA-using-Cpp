#include<iostream>
using namespace std;

// It's only use for one unique value

void uniqueValue(int brr[], int size){
    int unique=0 ;
    for(int i=0;i<size;i++){
        unique = unique ^brr[i];
    }
    cout<<"Unique value of the array is: "<<unique<<endl;
}
int main(){
int arr[] ={5,2,3,5,7,8,2,3,7};
int size = sizeof(arr)/sizeof(arr[0]);
uniqueValue(arr,size);

}