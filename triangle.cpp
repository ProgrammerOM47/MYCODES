#include<iostream>
using namespace std;

int main(){//starting of program
	int i ;
    i=1;
    while(i<=4){
        int j =1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<""<<endl;
        i++;
    }
	return 0;//end of program
    
	
}