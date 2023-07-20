#include<iostream>
using namespace std;
int search_recur(int arr[],int s,int e,int key){
    
    int m=s+e/2;
    if(s>e){
        return -1;
    }
    
    if(arr[m]>key){
        return search_recur(arr,m+1,e,key);
    }else if(arr[m]<key){
        return search_recur(arr,s,m-1,key);
    }else{
        return m;
    }

    

    
}
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<search_recur(arr,0,n-1,key);
    return 0;
}