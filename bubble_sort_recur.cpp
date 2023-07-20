#include<iostream>
using namespace std;
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubble_sort_reccur(int arr[],int n,int i,int j){
    //base ccase
    if(i==n-1){
        return;
    }
    if(j==n-i-1) bubble_sort_reccur(arr,n,i+1,0);
    else{
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }bubble_sort_reccur(arr,n,i,j+1);
    
    } 
    //recursive case
    

    
    
    
   

}
int main(){
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort_reccur(arr,n,0,0);
    print_array(arr,n);
    return 0;
}