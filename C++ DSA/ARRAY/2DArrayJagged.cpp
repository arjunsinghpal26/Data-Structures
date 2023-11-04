#include <iostream>
#include<vector>
using namespace std;
int main(){
    // int arr_name[][]= new int [][]{
    //     new int[] {10,20,30,40},
    //     new int []{50,60,70,80,90,100},
    //     new int[]{110,120}
    // };

    vector<vector<int>>brr;
    vector<int>vec1(5,1);
    vector<int>vec2(7,0);
    vector<int>vec3(8,1);
    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
     for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[i].size();j++){

            cout<<brr[i][j]<<" ";
            
        }
        cout<<endl;
    }


}

