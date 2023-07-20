#include<iostream>
using namespace std;
int main() {
	int n;
	int b=1;
	cin>>n;
	for(int d=2;d<n;d++){

		if(n%d==0){
			b=0;
			break;
		}

		
	}
	if(b){
		cout<<"Prime";
	}
	else{
		cout<<"Not Prime";
	}
	return 0;
}