#include<iostream>
using namespace std;
#include<cmath>

bool check_prime(int n){
    int i=3;
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    
    
    while(i<=sqrt(n)){
        if(n%i==0){
            return false;
           
        }
        i++;
    }
    return true;

}

void print_prime(int n){
   
    if(n<2){
        return;
    }
    cout<<"2\t";
    for(int i=3;i<=n;i+=2){
        if(check_prime(i)){
            cout<<i<<"\t";
        }
        

    }cout<<endl;

}


int main(){

    int n;
    cin>>n;
    
    print_prime(n);
    return 0;
    
    
}