#include<stdio.h>
#include<string.h>
int main(){
    int n, k, first=1;
    scanf("%d %d",&n, &k);
    int a[n] ;
    // for(int i=0;i<=n;i++){
    //     a[i] = 0;
    // }
    memset(a , 0, sizeof(int)*(n+1));
    for(int j=1;j<=k;j++){
        for(int i=1;i<=n;i++){
            if(i%j == 0)
                a[i] = !a[i];
        } 
    }
    for(int i= 1;i<=n;i++){
        if(a[i]==1 && first){
            printf("%d", i);
            printf(" ");
        }else if(a[i]==1){
            printf("%d", i);
        }
            
    }
    
}