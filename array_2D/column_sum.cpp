#include<iostream>
using namespace std;
void sumOfcolumn(int arr[3][4],int row, int column){
    for(int i=0;i<column;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+= arr[j][i];

        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={
                    {2,3,4,1},
                    {6,2,4,9},
                    {1,2,9,4}
                  };

    int row =3;
    int column =4;
    sumOfcolumn(arr,row,column);
}