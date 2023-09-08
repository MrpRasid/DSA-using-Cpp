#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,6,9,12,7};
    int target = 18;

// flag 0 does mean's target not found 
    bool flag = 0;

    for(int i=0;i<5;i++){
        if(arr[i] == target){
            // target found
            flag =1;
            break;
        }
    }
    if(flag == 1){
        cout<<"Target is found";
    }else{
        cout<<"Target is not found";
    }
}