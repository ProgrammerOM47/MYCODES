#include<iostream>
using namespace std;
bool check_sorted(int arr[],int n){
    // base case
    if(n==1){
        return true;
    }

    // recursice case
    return arr[n-1]>=arr[n-2] and check_sorted(arr,n-1);
    
    
    
    
}

int main(){
    int arr[]={1,2,3,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<check_sorted(arr,n);
    return 0;
}