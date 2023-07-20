#include<iostream>
using namespace std;
void print_sub_array(int arr[],int n){

    cout<<"[]"<<endl;
    for(int i=0;i<n;i++){

    

        for(int j=i;j<n;j++){

            cout<<"[";
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
               

            }
            

            cout<<"]\n";
            
        }
    }
}





int main(){
    int n;
    cin>>n;
    int arr[n];
    int target_sum;
    cin>>target_sum;
    
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    print_sub_array(arr,n);

}

