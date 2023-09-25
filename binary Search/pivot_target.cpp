#include<iostream>
#include<vector>
using namespace std;
int pivotfun(vector<int>& arr){
 int s = 0;
 int e = arr.size()-1;
 int n = arr.size();

 while(s<=e){
    int mid = s+(e-s)/2;
    // corner case
    if(s==e){
        // single element
        return s;
    }
    // remember the logic and it can ba mistake be care ful
    if(mid+1 < n && arr[mid]>arr[mid+1]){
        return mid;
    }
    else if(mid-1 >=0 && arr[mid]<arr[mid-1]){
        return mid-1;
    }
    else if(arr[s]>arr[mid]){
        e = mid -1;
    }
    else {
        s = mid+1;
    }
 }
 return -1;
}

int Ptarget(vector<int> &arr,int s, int e, int target){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(target > arr[mid]){
            s= mid+1;
        }else if(target < arr[mid]){
            e = mid-1;
        }   
    }
    return -1;
}

int main(){
    vector<int> arr;
    arr.push_back(8);
    // arr.push_back(9);
    // arr.push_back(10);
    // arr.push_back(11);
    // arr.push_back(3);
    // arr.push_back(4);
    int target = 8;
    int n = arr.size();
    int Pnum = pivotfun(arr);

    cout<< " pivot is: "<<Pnum<< endl;

    int ans = -1;
    if(target>=arr[0] && target <= arr[Pnum]){
        ans = Ptarget(arr,0,Pnum,target);
    }else{
        ans = Ptarget(arr,Pnum+1,n-1,target);
    }
   cout<<"target in the: "<<ans;
}

