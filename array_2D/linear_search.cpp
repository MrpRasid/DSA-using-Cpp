#include<iostream>
using namespace std;
bool Search(int arr[2][4],int row, int column, int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==target){
                return 1; 
            }
            // else{
            //     cout<<"Target not found"
            // }
           
        }
    }
    return 0;
}
int main(){
    int arr[2][4] = {{5,6,8,9},
                    {10,12,25,56}
                    };
int row =2;
int column =4;
int target;
cout<<"Enter the Target: ";
cin>>target;

// cout<<Search(arr, row,column,target);

if(Search(arr, row,column,target) ==1){
    cout<<"Target found: "<<target;
}else{
    cout<<"Target not found and the value is: "<<target;
}
// cout<<"If 0 then target not found if 1 then target found: "<<Search(arr, row,column,target);

}