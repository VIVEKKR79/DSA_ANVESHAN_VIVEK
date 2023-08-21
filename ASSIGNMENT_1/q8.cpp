#include<iostream>
using namespace std;

int main(){
    // 1st PATTERN
    // for(int i=0; i<6; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 2nd PATTERN
    // for(int i=0; i<6; i++){
    //     for(int k=4-i; k>=0; k--){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 3rd PATTERN
    // for(int i=0; i<6; i++){
    //     for(int j=i; j<5; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 4th PATTERN
    // for(int i=0; i<6; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=5-i; k>0; k--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 5th PATTERN
    // for(int i=0; i<6; i++){
    //     for(int j=5-i; j>0; j--){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 6th PATTERN
    // for(int i=0; i<6; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<" ";
    //     }
    //     for(int j = 5; j>i; j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 7th PATTERN
    // for(int i=0; i<5; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // 8th PATTERN
    // int num = 1;
    // for(int i=0; i<5; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // 9th PATTERN
    // int num = 1;
    // for(int i=0; i<5; i++){
    //     for(int j=4; j>i; j--){
    //         cout<<" ";
    //     }
    //     num = i ;
    //     for(int j=1; j<=i; j++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // 10th PATTERN
    
    // 11th PATTERN
    // char c = 'A';
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<=i; j++){
    //         char ans = c+i;
    //         cout<<ans<<" ";
    //     }
    //     cout<<endl;
    // }

    // 12th PATTERN
    char c = 'A';
    int num = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<=i; j++){
            char ans = c+num;
            cout<<ans<<" ";
            num++;
        }
        cout<<endl;
    }
}