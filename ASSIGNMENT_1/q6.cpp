#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter first numbers:";
    cin>>a;
    cout<<"Enter second numbers:";
    cin>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<"Numbers after swapping are"<<endl;
    cout<<"first number is :"<<a<<endl<<"second number is :"<<b<<endl;
}