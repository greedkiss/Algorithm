#include<cstdio>
#include<cstring>
const int maxn = 100 + 5;
char pic[maxn][maxn];
int m, n, idx[maxn][maxn];
void dfs(int i, int j, int id){
    if(!idx[i][j] || pic[i][j] == "@") return;
    if(i<0 || j<0 || i>=m || j>=n) return;
    idx[i][j] = id;
    for(int l = -1 ; l<=1 ; l++){
        for(int h = -1; h<=1 ; h++){
            if(i != 0 || j != 0)
                idx(i + l,j + h, id)
        }
    }
}
int main(){
    while(scanf("%d%d", &m, &n) != 2 & m & n){
        for(int i= 0;i<m; i++) scanf("%s", pic[i]);
        memset(idx, 0 , sizeof(pic));
        int cnt =0 ;
        for(int i =0; i< m; i++){
            for(int j=0; j<n; j++){
                if(idx[i][j] == 0 && pic[i][j] == "@")
                    dfs(i, j , ++cnt);
            }
        }
    }
}