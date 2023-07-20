#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
    int md=n/2+1;

	
    
	for(int i=0;i<md;i++){
		int j=0;
		while(j<(n/2-i+2)){
			j++;
            cout<<"  ";
        }	
			
        while(j<=(n/2+i)){
            j++;
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for(int i=0;md<=n;md++,i++){
        int j=0;
        while(j<=i){
            cout<<"  ";
            j++;

        }while(j<(n-i+1)){
            cout<<"* ";
            j++;
        }
        cout<<endl;
    }     
     
}                              
       

			
        
        
			
		
        

	
    
    
	
