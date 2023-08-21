#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout<<"Enter Binary Num:";
    cin>>num;
    int n = 0 , digit , ans = 0;
    while(num!=0){
        digit = num%10;
        ans = ans + digit* pow(2,n);
        num = num/10;
        n++;
    }
    cout<<ans<<endl;
}