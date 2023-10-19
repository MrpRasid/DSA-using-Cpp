#include<iostream>
using namespace std;
void print(int arr[][4],int row, int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Transpose(int arr[][4],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=i;j<column;j++){

            swap(arr[i][j], arr[j][i]);
            
        }
    }
}
int main(){
    int arr[3][4] = {
                    {1,2,9,3},
                     {3,7,5,7},
                     {2,4,8,6}
                     };

int row = 3;
int column = 4;

cout<<"Print before trans pose"<<endl;
print(arr,row, column);


cout<<"print after transpose"<<endl;
Transpose(arr,row,column);
print(arr,row, column);

}