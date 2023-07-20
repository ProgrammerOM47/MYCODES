#include<iostream>
using namespace std;
#include<vector>
#define pb push_back
void rotate_vector(vector<int>v){
    vector<int>v1(v.size());
    v1[0]=v[v.size()-1];
    for(int i=1;i<v.size();i++){
        v1[i]=v[i-1];

    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.pb(num);
    }
    rotate_vector(v);
    return 0;
}
