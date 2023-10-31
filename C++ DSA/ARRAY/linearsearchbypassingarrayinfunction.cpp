#include<iostream>
using namespace std;


bool linearsearch(int arr[],int size,int target){

    for(int i=0;i<size;i++){

        if(arr[i]==target){
            return true;
        }
    }
    return false;

}
int main(){
    int arr[5]={2,4,6,8,10};
    int size=5;
    int target=10;

bool ans= linearsearch(arr,size,target);
if(ans==1){

    cout<<"Target found"<<endl;

}
else {

    cout<<"Target is not found"<<endl;

}
}





