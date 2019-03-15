#include<cstdio>
#include<algorithm>
using namespace std;
// #define max 1000;
const int maxn = 10000;
int main(){
     int p, n, a[maxn], i;
     int fcase = 0;
     while(scanf("%d%d", &p, &n) == 2 && n){
         printf("CASE# %d:\n", fcase++);
         for(int j= 0; j<p; j++){
             scanf("%d", &a[j]);
         }
         sort(a, a+p);
         while(n--){
             scanf("%d", &i);
             int q = lower_bound(a , a+ p, i) - a;
             printf("asd %d", a[q]);
             if(a[q]== i){
                 printf("%d found at %d\n", i, q+1);
             }else{
                 printf("%d not found\n", i);
             }
         }
     }
     return 0;
}