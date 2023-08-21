#include<iostream>
using namespace std;

int main(){
    int r1 , c1 , r2 , c2 ;
    cout<<"Enter rows and col of 1st Matrix:";
    cin>>r1>>c1;
    cout<<"Enter rows and col of 2st Matrix:";
    cin>>r2>>c2;
    int arr1[r1][c1] , arr2[r2][c2] , arr3[r1][c2];
    if(c1!=r2){
        cout<<"Can't Multiply";
        return 0;
    }
    cout<<"Enter elements in 1st Matrix :";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++)
        cin>>arr1[i][j];
    }
    cout<<"Enter elements in 2st Matrix :";
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++)
        cin>>arr2[i][j];
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++)
        arr3[i][j] = 0;
    }


    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            for(int k=0; k<c1; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j] ;
            }
        }
    }
    cout<<"Matrix after Multiplication :";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}