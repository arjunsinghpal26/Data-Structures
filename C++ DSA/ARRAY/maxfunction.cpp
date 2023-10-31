#include<iostream>
using namespace std;

int printmaximum(int a, int b , int c) {
int ans1 =max(a,b);
int ans2=max(ans1,c);
return ans2;
}




int main()
{
int maximum=printmaximum(4,7,5 );
cout<<maximum<<endl;
return 0;



}