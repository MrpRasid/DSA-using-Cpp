#include<iostream>
using namespace std;
void revDioganalSum(int arr[3][3],int row, int column){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        // sum+=arr[i][column-i-1];  // it will run for column time's so ans will rong

            if(j==column-i-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
}
int main(){
    int arr[3][3]={
                    {8,3,4},
                    {5,2,7},
                    {9,1,6}
                      };

    int row=3;
    int column=3;
    revDioganalSum(arr,row,column);
}