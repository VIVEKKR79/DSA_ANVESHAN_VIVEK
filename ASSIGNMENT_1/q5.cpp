#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;
    int a;
    a = c - 0;
    if(a>=48 && a<=57)
    cout<<"c is Digit";

    else if((a>=65 && a<=90) || (a>=97 && a<=122))
    cout<<"c is Character";

    else
    cout<<"c is Special Charactor";
}