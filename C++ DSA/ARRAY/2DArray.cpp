#include <iostream>
using namespace std;
void printarray(int arr[][4],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
       cout<<endl;
    }
}
int main () {
    int arr[][4]={
        {10,20,30,40},
        {80,70,60,50},
    };
    int row =2;
    int col=4;
    printarray(arr,row,col);
    return 0;
}