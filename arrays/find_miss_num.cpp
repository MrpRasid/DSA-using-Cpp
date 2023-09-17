#include<iostream>
#include<vector>

using namespace std;


int main(){
 vector<int> nums ={6,3,5,4,1};
 int size = nums.size();
 int n=6;
 int sumofN = n*(n+1)/2; 
 int sum =0;
 for(int i=0;i<size;i++){
    sum+= nums[i];
 }  

 cout<<"Missing num is: "<<sumofN-sum;
}