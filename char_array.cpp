#include<iostream>
using namespace std;
int main(){
    char a[10];
    for(int i=0;i<10;i++){
        a[i]='a'+i;
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    cout<<a<<endl;
    return 0;
}
