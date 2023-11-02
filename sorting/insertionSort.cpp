#include<iostream>
#include<vector>
using namespace std;

 int insSort(vector<int> &v,int n){
    for(int i=1;i<n;i++){
        int key = v[i];
        int j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1] =v[j];
            j--;
        }
        v[j+1] = key;
    }
 }

 void print(vector<int>&v, int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
 }

int main(){
 vector<int> v = {9,6,5,4,3,2,33};

 int n = v.size();

 insSort(v,n);
 print(v,n);
}