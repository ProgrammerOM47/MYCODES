#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<(n-i+1)){
            cout<<" ";
            spaces++;
        }
        int k=1;
        while(spaces<=n){
            cout<<(i+k-1);
            spaces++;
            k++;

        }
        while(spaces<=(n+i-1)){
            cout<<(i+k-3);
            spaces++;
            k--;
        }
        cout<<endl;
        i++;
    }
}