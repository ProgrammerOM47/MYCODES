#include<iostream>
#include<vector>
#define pb push_back
#include<algorithm>
using namespace std;
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}
int main(){
    vector<int>v;
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.pb(num);

    }
    sort(v.begin(),v.end());
    // cout<<v.begin()<<" "v.end()<<endl;
    print(v);
}