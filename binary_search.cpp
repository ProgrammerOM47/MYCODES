#include<iostream>
using namespace std;

int main(){
    int arr[]={2,5,11,44,5,44};
    int s,e,m;
    int key;
    cin>>key;
    int n=sizeof(arr)/sizeof(arr[0]);
    s=0;
    e=n-1;
    m=s+e/2;


    while(s<=e){
        if(arr[m]==key){
            cout<<m;
            break;
        }
        else if(arr[m]<key){
            s=m-1;
        }
        else if(arr[m]>key){
            e=m-1;
        }
        else{
            cout<<"-1";
        }
        
    }

}