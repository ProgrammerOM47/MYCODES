#include<iostream>
using namespace std;
#include<cstring>
void reverse_string(string &str){
    int e=str.size()-1;
    int s=0;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    

}
int main(){
    string s="hello";
    
    reverse_string(s);
    cout<<s<<endl;
    
    return 0;

}