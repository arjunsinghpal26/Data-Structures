#include <iostream>
using namespace std;
    // void printarray(int arr[][4],int row, int col){
    //     for(int i=0;i<row;i++){
    //         for(int j=0;j<col;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     cout<<endl;
    //     }
    // }
int main () {
    int arr[3][3];
    int row =3;
    int col=3;
    
 for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            cout<<" Enter input for row index :"<<i<<" Column index:"<<j<<endl;
            cin>>arr[i][j];}
 }
}