#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {
                    {1,2,9,3},
                     {3,7,5,7},
                     {2,4,8,6}
                     };
  // trans pose of matrix
 for(int i=0;i<4;i++){
    
    for(int j=0; j<3;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
 }
}