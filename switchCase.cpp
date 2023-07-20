#include<iostream>
using namespace std;
int main(){
    int Grade;
    cin>>Grade;
    switch(Grade){
        case 1:
            cout<<"0-20\n";
            break;
        case 2:
            cout<<"21-40\n";
            break;
        case 3:
            cout<<"41-60\n";
            break;       
        case 4:
            cout<<"61-80\n";
            break;
        case 5:
            cout<<"81-100\n";
            break;    
        default:
            cout<<"invalid Grade\n";
            break;
    }
    return 0;


}