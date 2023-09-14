#include<iostream>
using namespace std;
void Separate(int arr[],int size){
    int zero =0;
    int one = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    cout<<"0's are: " <<zero<<endl;
    cout<<"1's are: "<<one; 
}
int main(){
    // separate 0's and 1's
    int arr[] = {1,0,0,1,0,0,0,1,1,0,1,0};
int size = sizeof(arr)/sizeof(arr[0]);
// cout<<size;
    Separate(arr,size);

}