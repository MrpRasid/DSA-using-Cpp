#include<iostream>
#include<string.h>
using namespace std;
void upperCase(char ch[],int n){
    int indx =0;

    while(ch[indx] != '\0'){
        
        if(ch[indx]>='a' && ch[indx]<= 'z'){
            ch[indx] = ch[indx] -'a'+'A';
        }
        indx++;
    }
}

int main(){
    char ch[20];
    cout<<"Enter the char: ";
    cin.getline(ch,20);
    cout<<"Before case: "<<ch<<endl;

    upperCase(ch,20);

    cout<<ch;

}