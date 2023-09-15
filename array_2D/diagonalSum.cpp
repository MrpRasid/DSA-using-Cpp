#include<iostream>
using namespace std;

// diagonal sum

void diagonalSum(int arr[3][3],int row, int column){
    int sum=0;
    for(int i=0;i<row;i++){
        // not need of two loop one loop can traverse whole diagonal

        sum+=arr[i][i];

    }
    cout<<"sum is: "<<sum;
}
int main(){
    // for diagonal sum number of rows and number of column should be equal
    int arr[3][3] ={
                    {8,3,2},
                    {5,9,1},
                    {4,2,9}
                      };
    int row=3;
    int column=3;
    diagonalSum(arr,row,column);
}