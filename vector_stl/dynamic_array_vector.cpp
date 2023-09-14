#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>n){
    int size = n.size();
    for(int i=0;i<size;i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>vc;
    int n;
    cout<<"Enter the vector size: ";
    cin>>n;
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        vc.push_back(b);
    }
    cout<<" values are: ";
    print(vc);

    cout<<"re add element after array size";
    for(int i=0;i<4;i++){
        vc.push_back(i);
    }
    print(vc);

}