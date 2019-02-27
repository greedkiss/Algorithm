#include<stdio.h>
#include<string.h>
#define maxn 20
int a[maxn][maxn];
int main(){
    memset(a, 0, sizeof(a));
    int n;
    scanf("%d", &n);
    int tota = 1;
    int x = 0;
    int y = n-1;
    a[x][y] = 1;
    while(tota < n*n){
        
        while(x<n-1 && !a[x+1][y]){
            a[++x][y] = ++tota;
        } 
        while(y>=1 && !a[x][y-1]) a[x][--y] =  ++tota;
        // printf("%d",tota);
        while(x>=1 && !a[x-1][y]) a[--x][y] = ++tota;
        while(y<n-1 && !a[x][y+1]) a[x][++y] =  ++tota;
    }
    
    for(int i=0; i<n; i++){
        for(int y=0; y<n; y++){
            printf("%3d", a[i][y]);
        }
        printf("\n");
    }
    return 0;
}
//bullshit