#include<iostream>
using namespace std;
int sum_array(int arr[],int n){
    int sum=0;
    // base case
    if(n==0){
        return sum;
    }
    
    // recursice case
    
    return sum+=arr[n-1]+sum_array(arr,n-1);
    
    
    
    
    
}

int main(){
    int arr[]={1,2,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sum_array(arr,n);
    return 0;
}