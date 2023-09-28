#include<iostream>
#include<vector>
using namespace std;
// short the vector using buble short
void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void bShort(vector<int> &v){
    int n = v.size();

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    vector<int> v = {25,15,-8,7,5,3,1,0};

bShort(v);
print(v);

}
