#include<iostream>
using namespace std;
void print(vector <int> v){
int size=v.size();
for(int i=0;i<size;i++){
cout<<v[i]<<endl;
}
}
int main(){
vector<int>v;
v.push-back(1);
print(v);

}
v.pop_back();
print(v);
