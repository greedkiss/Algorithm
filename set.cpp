// #include<cstdio>
// #include<cstring>
// const int maxn = 20;
// int array[1<<20];
// int main(){
//     int n,i;
//     int num;
//     while((scanf("%d%d",&n,&i)) == 2){
//         memset(array, 0, sizeof(array));
//         for(int j = 1; j<= i; j++){
//             num = 1;
//             for(; num< 1<<n ; ){
//                 array[num]=!array[num];
//                 num = array[num] ? num*2 : num*2 +1;
//                 printf("%d\n", num);
//             }
//         }
//         printf("%d\n", num/2);
//     }
//     return 0;
// }

//solution 2
#include<cstdio>
int main(){
    int d, i;
    while((scanf("%d%d",&d,&i)) == 2){
        int k = 1;
        for(int j = 0; j< d - 1 ;j++){
            if(i % 2){
                k = k*2;
                i = (i + 1)/2;
            }else{
                k = k*2 + 1;
                i = i/2;
            }
            printf("%d\n", i);
        }
        printf("%d", k);
    }
    return 0;
}   