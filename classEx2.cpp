#include<iostream>
using namespace std;
void print_pair(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"("<<arr[j]<<","<<arr[i]<<")"<<endl;

        }
    }
}




int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    print_pair(arr,n);
    return 0;

}