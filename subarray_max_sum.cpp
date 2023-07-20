#include<iostream>
using namespace std;
#include<climits>

int subarray_max(int arr[],int n){
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum+=arr[k];
                

            }if(max_sum<sum){
                max_sum=sum;

            }
        }
    }
    return max_sum;


}





int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<subarray_max(arr,n);
}