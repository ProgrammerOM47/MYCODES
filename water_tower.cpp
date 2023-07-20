#include<iostream>
using namespace std;
int tallest_tower(int arr[]){
    int s=0;
    int e=s+2;
    int b=1;
    while(b){
        int high_mark=min(arr[s],arr[e]);
        e++;
        if(arr[i+1]<arr[i]){
            b=0;
        }
    }
    return high_mark;   
} 
void rain_water(int arr[],int s,int e,int high_mark;int &ws){

    

    
    // int high_mark;
    // if(arr[0]>arr[n-1]){
    //     high_mark=arr[n-1];
    // }else{
    //     high_mark=arr[0];
        
    // }
    for(int i=s;i<e;i++){
        int k=high_mark-arr[i];
        while(k>0){
            ws++;
            k--;
           
        }
        
        


    }
    return water_stored;
    // cout<<water_stored<<endl;
}
int main(){
    int n;
    cin>>n;
    
    // for(int i=0;i<n;i++){
    //     int l;
        
    //     cin>>l;
    //     int arr[l];
    //     for(int j=0;j<l;j++){
    //         cin>>arr[j];
            
    //     }
    //     rain_water(arr,0,l);

    // }
    int arr[n];
    for(int j=0;j<l;j++){
        cin>>arr[j];
            
    }

    
    
    while(e==l){
        int hp;
        int &w_s=0;
        
        hp=tallest_tower(arr);
        
        rain_water(arr,s,e,hp,ws);
        

    }    


        

    
    
    
    
}