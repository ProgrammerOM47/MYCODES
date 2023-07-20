#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
bool find_word(char list[][10],char word[],int ls,int ws){
    for(int i=0;i<ls;i++){
        bool flag=true;
        for(int j=0;j<ws;j++){
            if(list[i][j]==word[j]){
                if(word[j]=='\0'){
                    break;
                }continue;
            }
            flag=false;
            break;
            
        }if(flag){
            return true;
        }
    }return false;
}

int main(){
    char list[][10]={
        "Hello",
        "World",
        "bye",
        "bye",
        "now",
        "Ture",
        "false"
    
    };
    
    int ws=10;
    char arr[ws];
    int n=sizeof(list)/sizeof(list[0]);
    cin.get(arr,ws);
    if(find_word{list,arr, }){
        cout<<"word is present"<<endl;;
    }else{
        cout<<"word is not present"<<endl;
    }
    return 0;
}