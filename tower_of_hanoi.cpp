#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
void tower_of_hanoi(int n,string a,string b,string c){
    
        
    if(n==0){

        
        return;

    }
    tower_of_hanoi(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    tower_of_hanoi(n-1,b,a,c);
    
    
    
    
    
    



}
int main(){
    int n;
    cin>>n;
    
    tower_of_hanoi(n,"A","B","C");
    return 0;
}