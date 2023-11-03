#include<iostream>
#include<string.h>

using namespace std;

    bool checkPalindrom(char ch[], int n){

        int i=0;
        int j=n-1;

        while(i<=0){
            if(ch[i] == ch[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }

int main(){
    char ch[20];

    cout<<"Enter the name: ";
    cin>>ch;

    int siz = strlen(ch);

    

  if(checkPalindrom(ch,siz)){
    cout<<"Valid Palindrom";
  }else{
    cout<<"Invalid Palindrom";
  }

}