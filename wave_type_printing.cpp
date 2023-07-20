#include<iostream>
using namespace std;
void print_wave_arr(int arr[4][4],int m,int n){
    int row=0,col=0;
    while(col<n){
        if(col%2){
            row=m-1;
            while(row>=0){
                cout<<arr[row--][col];
            }

        }else{
            row=0;
            while(row<m){
                cout<<arr[row++][col]<<" ";
            }
        }col++;
    }cout<<endl;
}
int main(){
    int m,n;
    cin>>m>>n;
    
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    print_wave_arr(arr,m,n);
    return 0;
}