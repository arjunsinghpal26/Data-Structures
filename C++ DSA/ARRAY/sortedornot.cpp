#include <iostream>
#include<vector>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7};
bool sortedflag=true;
for(int i=1;i<6;i++){
if(arr[i]<=arr[i-1]){
    bool sortedflag=false;
}
cout<<sortedflag<<endl;

}
return 0;

}