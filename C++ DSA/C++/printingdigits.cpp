#include<iostream>
using namespace std;
void printAllDigits(int n){
    while(n){
        int onesplacedigit= n%10;
        cout<<" Digits are ";
        cout<< onesplacedigit<<endl;
        n=n/10;
    
    }
}

int main() {
int n;
cout<<"Enter the digits"<<endl;
cin>>n;
printAllDigits(n);





}