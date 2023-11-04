#include <iostream>
#include <utility>
using namespace std;
void transpose(int arr[][4],int row, int col){

for(int i=0;i<row;i++){
    for(int j=i;j<col;j++){
        swap(arr[i][j], arr[j][i]);
    }
}

}
void printarray(int arr[][4],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
       cout<<endl;
    }
}
int main () {
    int arr[4][4]={
        {10,20,30,40},
        {80,70,60,50},
        {9,4,5,6},
        {5,4,3,2}
    };
    int row =4;
    int col=4;
    cout<<endl<<"Printing befor transpose"<<endl;
    printarray(arr,row,col);
    cout<<endl<<"Printing Doing transpose"<<endl;
    transpose(arr,row,col);
    printarray(arr,row,col);

    cout<<endl<<"Printing after transpose"<<endl;
    printarray(arr,row,col);
    return 0;
}