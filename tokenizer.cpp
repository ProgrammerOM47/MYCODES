#include<iostream>
using namespace std;
#include<cstring>
int tokenizer(char *s ,char list[100][10]){
    int i=0,cnt=0,wi=0;
    while(true){
        if(s[i]==' '){
            list[cnt][wi]='\0';
            cout<<endl;
            
            cnt++;
            wi=0;
        }else if(s[i]=='\0'){
            if(i==0) return 0;
            else{
                list[cnt][wi]='\0';
                return ++cnt;

            }
            
            
        }else{
            cout<<s[i];
        }
        i++;
        

        
    }
    list[cnt-1][wi]='\0';
    cout<<endl;
    return cnt;
    

}
int main(){
    char sentense[]="Hello my name is om";
    char list[100][10];
    int n=tokenizer(sentense,list);
    for(int i=0;i<n;i++){
        cout<<list[i];
    }
    return 0;
}