#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(9);

    while(1){
        int data;
        cin>>data;
        v.push_back(data);

        // if vector capacity full fill the size then the capacity will double(2x).
        cout<<"vector size: "<<v.size()<<" vector capacity: "<<v.capacity(); 
    }


}