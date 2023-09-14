#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

}

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);
    v.push_back(9);

    print(v);

    // pop the element

    cout<<"After Pop the element: ";
    v.pop_back();
    v.pop_back();
    print(v);
}
