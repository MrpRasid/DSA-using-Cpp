#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v ={4,8,33,7,1,45,3};

    int n = v.size();

    for(int i=0;i<n;i++){
        int min =i;

        for(int j=i+1;j<n;j++){
            if(v[j]<v[min]){
                min = j;
            }
        }
        swap(v[i],v[min]);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}