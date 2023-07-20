#include<iostream>
using namespace std;

void increment_by_10(int &in){
    in+=10;
    cout<<in<<endl;
    
}

int main(){
    int mn=20;
    increment_by_10(mn);
    cout<<mn<<endl;
    return 0;
}