#include<iostream>
using namespace std;
int length_of_string(char*arr){
    int cnt=0;
    int i=0;
    while(arr[i]!=' '){
        cnt++;
        i++;

    }return cnt;

}

void append_array(char*arr1,char*arr2){
    int an=length_of_string(arr1);
    int bn=length_of_string(arr2);
    for(int i=0,j=an;i<=bn;i++,j++){
        arr1[j]=arr2[i];
    }
}
int main(){
    char arr1[100];
    char arr2[100];
    cin.getline(arr1,100);
    
    cin.getline(arr2,100);

    append_array(arr1,arr2);
    cout<<arr1;
    
    
    return 0;
}