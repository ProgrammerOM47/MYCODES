
#include<stdio.h>
#include<math.h>

int arr[10000000];

int sum_of_multiples(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%3==0 || i%5==0){
            sum+=i;
        }

    }
    
    
    return arr[n];
}


int main(){
    int n=pow(10,7);
    
    
    for(int i=1;i<=n;i++){
        arr[i]=sum_of_multiples(n,arr);

    }
    

    int T=1;
    // scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);

        printf("N",arr[N]);
    }
}