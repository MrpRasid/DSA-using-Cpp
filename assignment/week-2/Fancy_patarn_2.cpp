#include<iostream>
using namespace std;

int main(){
    int num=1;
    cout<<"enter the number: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        // int logic=;
       
        for(int j=0;j<=i;j++){
            cout<<num;
            num++;

            if(j<i){
                cout<<"*";
            }
        }

        
        cout<<endl;
    }

    // shrinking value
    int start = num-n;

    for(int i=0;i<n;i++){
        int k = start;

        for(int j=0;j<n-i;j++){
            cout<<k;
            k++;

            if(j<n-i-1){
                cout<<"*";
            }
        }
        start = start- (n-i-1);
        cout<<endl;
    }
}