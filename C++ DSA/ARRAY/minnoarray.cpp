#include<iostream>
using namespace std;


int findminimuminarray(int arr[], int size){

int minans = INT64_MAX;
for(int i=0;i<size;i++){

    if(arr[i]<minans){

        minans=arr[i];
    }
}
return minans;
}



int main()
{  
int arr[]={10,8,31,4,3,1,-51};
int size=7;
int minimum= findminimuminarray(arr,size);
cout<<"Minimum number is:"<<minimum<<endl;

    return 0;
}