#include<iostream>
using namespace std;

void print_index(int arr[],int n){
    if(n==0){
        return;
    }
    print_index(arr,n-1);
    if(arr[n-1]==7){
        cout<<n-1<<" ";
    } 
   
    
    
}
int main(){
    int arr[]={5,4,3,7,2,3,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    print_index(arr,n);
    return 0;
}