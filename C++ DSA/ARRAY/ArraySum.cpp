#include<iostream>
using namespace std;
int main( ) {

int arr[10];
int n=10;
cout<<"Enter the input" <<endl;
for(int i=0;i<n;i++){

    cin>>arr[i];
}
int sum=0;

for(int i=0;i<n;i++) {

    sum = sum + arr[i];
}

cout<<"Printing sum:" << sum<<endl;
}