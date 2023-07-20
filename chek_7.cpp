#include<iostream>
using namespace std;
// bool check_7(int arr[],int n,int i){
//     if(n==0){
//         return false;

//     } 
    
//     return arr[n-1]==7 or check_7(arr,n-1);
// }
int print_index(int arr[],int n,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==7){
        return i;
    }
    return print_index(arr,n,i+1);
    
    
}
int main(){
    int arr[]={5,4,3,7,2,3,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // if(check_7(arr,n)){
    //     cout<<"yes\n";
    // }else{
    //     cout<<"no\n";
    // }
    cout<<print_index(arr,n,0);
    return 0;
}