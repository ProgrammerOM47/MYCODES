#include<iostream>
using namespace std;
void converter(int i){
    float cel;
    cel=(5/9.0)*(i-32);
    cout<<i<<" "<<cel;
}
int main(){
    int init,fval,step;
    cin>>init>>fval>>step;
    while(init<=fval){
        
        converter(init);
        cout<<endl;
        init+=step;
    }
}