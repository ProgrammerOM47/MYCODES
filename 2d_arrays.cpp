#include<iostream>
using namespace std;
int main(){
    int rn=5,cn=5;
    int arr[][5]={
        {1},
        {2,4,5,6,79},
        {3},
        {},
        {10,20,30},
        {78,89}
    };
    for(int i=0;i<rn;i++){
        for(int col=0;col<cn;col++){
            cout<<arr[i][col]<<"\t";
        }cout<<endl;
    }
    // int arr1[10]={0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}