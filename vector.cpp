#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v={0,1,2,3,4,5,6};
    vector<int>v1(v);
    v1[0]=10;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}