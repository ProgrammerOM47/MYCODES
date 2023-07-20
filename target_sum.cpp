#include<iostream>
using namespace std;

void print_sub_array(int arr[],int s,int e){
    for(s=0;s<e;s++){
        cout<<arr[s]<<" ";
    }
}





void target_sum(int arr[],int n,int t_sum){

    cout<<"[]"<<endl;
    for(int i=0;i<n;i++){

    

        for(int j=i;j<n;j++){

            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(t_sum==sum){
                print_sub_array(arr,i,j);
            }
            

            
            

            
            
        }
    }
}





int main(){
    int n;
    cin>>n;
    int arr[n];
    int t_sum;
    cin>>t_sum;
    
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    target_sum(arr,n,t_sum);

}