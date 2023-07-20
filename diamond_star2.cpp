#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1;
    int k =n;
    while(i<=n or n>=k) {
        int j=1;
        int spaces=1;
        while(j<=(n-i) or spaces<=(n-k+1)){
            cout<<" ";
            j++;
        }while(j<=(n+i-1) or spaces<=(n+k-1)){
            cout<<"* ";
            j++;
        }
        i++;
        if(i>=n and k>0){
            k--;
        }
        cout<<endl;

    }

        


}