#include<iostream>
using namespace std;
#include<algorithm>
void print_arr(int arr[],int s,int e){
    for(int k=s;k<=e;k++){
        cout<<arr[k]<<',';
        
    }
    cout<<endl;
    

  
}
void target_sum_triplets(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];

            }if(sum==target){
                print_arr(arr,i,j);
            }
            
            
        }
    }
    
}
int main(){
    
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    
    
    int target;
    cin>>target;
    target_sum_triplets(arr,n,target);
    return 0;
}