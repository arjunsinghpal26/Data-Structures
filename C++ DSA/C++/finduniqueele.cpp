#include <iostream>
using namespace std;
int getunique(int arr[],int size){
int ans=0;
for(int i=0;i<size;i++){

    ans=ans^arr[i];
}
return ans;
}
int main(){
int arr[]={2,10,11,10,2,13,15,13,15};
int   size=9;
int finalans=getunique(arr,size);
cout<<"FinalAnswerIs: "<<finalans<<endl;
return 0;

}