#include<stdio.h>
long long c(int m){
    long long i = 1;
    for(int j=1;j<=m;j++){
        i=i*j;
    }
    return i;
}
int main(){
    int m,n;
    scanf("%d %d",m,n);
    printf("ld", c(m)/c(n)/c(m-n));
    return 0;
}