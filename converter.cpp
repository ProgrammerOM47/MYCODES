#include<iostream>
using namespace std;
void converter(int i,int f,int s){
    float cel;

    while(i<=f){
        cel=(5/9.0)*(i-32);
        cout<<i<<" "<<cel<<endl;
        i+=s;
        
    }
}



int main(){
    int init,fval,step;
    cin>>init>>fval>>step;

    converter(init,fval,step);


}