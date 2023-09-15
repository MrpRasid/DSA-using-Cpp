#include<iostream>
using namespace std;
void arraySum(int arr[3][3],int row, int column){
   
    for(int i=0;i<row;i++){
         int sum=0;
        for(int j=0;j<column;j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arry[3][3] = {
                        {2,3,4},
                        {8,9,7},
                        {5,4,2}
    };
    int row=3;
    int column=3;
    // arraySum(arr,row,column);
    arraySum(arry, row, column);
}