#include<iostream>
using namespace std;
void pattern(int n,int arr[],int max){
    for(int j=1;j<=max;j++){
        for(int i=0;i<n;i++){
            if(arr[i]==max) cout<<j;

            else if(arr[i]-max+j>=1){
                cout<<arr[i]-max+j;


            }

            else{
                cout<<" ";
            }
            cout<<" ";

        }cout<<endl;

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    pattern(n,arr,max);
    
}