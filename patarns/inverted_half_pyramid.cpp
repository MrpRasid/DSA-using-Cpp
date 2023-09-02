#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number for pattern: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        // for(int j=i;j<n;j++)  / al so will work
        for(int j=i;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}