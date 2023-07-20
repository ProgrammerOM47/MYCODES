#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    int i=1;
    while(ch!='$'){
        i++;
        cin.get(ch);
    }
    cout<<i<<endl;
    return 0;
}