#include<iostream>
using namespace std;
bool can_give_DC(int m,int n,int x,int y,int mid){
    int TDC,RDC;
    TDC=n+(m-mid)*y;
    RDC=mid*x;
    return TDC>=RDC;


}




int discount_coupon(int m,int n,int x,int y){
    int s=0,e=m;
    int mid=(s+e)/2;
    int ans;
    while(s<=e){
        mid=(s+e)/2;
        if(can_give_DC(m,n,x,y,mid)){
            ans=mid;
            s=mid+1;
            
        }else{
            e=mid-1;
        }
        


    }return ans;
}

int main(){
    int m=10,n=6,x=2,y=1;
    cin>>m>>n>>x>>y;
    cout<<discount_coupon(m,n,x,y);

    
    return 0;
}