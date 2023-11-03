#include<iostream>
using namespace std;
void replace(char ch[], int n){
    int indx =0;
    while(ch[indx] != '\0'){
        if(ch[indx] == '@'){
            ch[indx] = ' ';
        }
        indx++;
    }
}
int main(){
    char ch[30];
    cout<<"Enter the value: ";
    cin.getline(ch,30);
    cout<<"Before the replace: "<<ch<<endl;

    replace(ch,30);

    cout<<"after replace: "<<ch;
}