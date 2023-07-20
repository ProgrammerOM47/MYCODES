#include<iostream>
using namespace std;
#include<climits>

void min(int arr[],int n){
    int min=INT_MIN;
    for(int j=0;j<n;j++){
        if(arr[j]>min){
            min=arr[j];
        }
        
    }
    cout<<min<<endl;

    

}
void max(int arr[],int n){
    int max=INT_MAX;
    for(int j=0;j<n;j++){
        if(arr[j]<max){
            max=arr[j];

        }
    }cout<<max<<endl;

}

void sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];


    }
    cout<<sum<<endl;


}
int main(){
    int arr[]={2,3,5,6,7,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    sum(arr,n);
    max(arr,n);
    min(arr,n);
    return 0;

}