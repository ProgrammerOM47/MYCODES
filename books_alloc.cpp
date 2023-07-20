#include<iostream>
using namespace std;
bool can_read_mid_page(int arr[],int n,int m,int mid){
    int c_p=0,c_s=1;
    for(int i=0;i<n;i++){
        if(c_p+arr[i]<=mid){
            c_p+=arr[i];
        
        }else{
            c_p=arr[i];
            c_s++;
        }
        if(c_s>m){
            return false;
        }
        
    }return true;
}
int book_alloc(int arr[],int n,int m){
    int s=arr[n-1],e=0;
    for(int i=0;i<n;i++){
        e+=arr[i];
    }
    int ans=e;
    while(s<=e){
        int mid=(s+e)/2;
        if(can_read_mid_page(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int n=10,m=4;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<book_alloc(arr,n,m);
    return 0;
}