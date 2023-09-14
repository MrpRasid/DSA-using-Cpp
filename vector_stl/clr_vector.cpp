#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>n){
 for(int i=0;i<n.size();i++){
        cout<<n[i]<<endl;
    }
}
int main(){
    vector<int>n;

    n.push_back(4);
    n.push_back(5);
    n.push_back(3);
    print(n);


    n.clear();

    cout<<"after clear: ";
    print(n);
   
}