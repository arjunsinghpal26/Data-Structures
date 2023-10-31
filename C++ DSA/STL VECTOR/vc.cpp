#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5];
    vector<int>v(5,101);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}