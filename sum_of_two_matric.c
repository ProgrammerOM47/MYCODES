#include<stdio.h>
void print(int sum[][3],int m,int n){
    printf("this is sum array\n");
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            printf("%d ",sum[i][j]);
        }printf("\n");        
    }
}
void sum(int M[3][3],int A[3][3],int m,int n){
    int sum[m][n];
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            sum[i][j]=M[i][j]+A[i][j];
        }
    }print(sum,m,n);    
}
int main(){
    int m=3,n=3;
    int M[3][3];
    int A[3][3];
    printf("input the array 1\n");
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){      
            scanf("%d",&M[i][j]);
        }
    }printf("input the array 2\n");    
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){         
            scanf("%d",&A[i][j]);
        }
    }sum(M,A,m,n);  
    return 0;
}