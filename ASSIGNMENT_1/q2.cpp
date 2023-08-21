#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter first num:";
    cin>>a;
    cout<<"Enter second num:";
    cin>>b;
    int op;
    cout<<"Enter 1,2,3,4,5 to perform Addition, Subtraction, Multiplication, Division, Modulo respectively:";
    cin>>op;
    switch (op)
    {
    case 1:
        cout<<"Additon is :"<<a+b<<endl;
        break;
    case 2:
        cout<<"Subtraction is :"<<a-b<<endl;
        break;
    case 3:
        cout<<"Multiplication is :"<<a*b<<endl;
        break;
    case 4:
        cout<<"Division is :"<<a/b<<endl;
        break;
    case 5:
        cout<<"Modulo is :"<<a%b<<endl;
        break;
    
    default:
        cout<<"OOPS"<<endl;
        break;
    }

}