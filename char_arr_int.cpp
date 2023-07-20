#include<iostream>
using namespace std;
int main(){
    char ch[5]={'k','d','t','\0'};
    int i=0;
    char arr[6]={'a','b','c','d','e','\0'};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    cout<<arr<<endl;
    return 0;
}