#include<stdio.h>
#include<string.h>
int main(){
    int count = 0;
    char buff[99], s[20];
    scanf("%s", s);
    for(int i=101 ; i<=999; i++){
        for(int j= 11; j<=99; j++){
            int h = i*(j%10);
            int k = i*(j/10);
            int result = i*j;
            int ok =1;
            sprintf(buff, "%d%d%d%d%d", i,j,h,k,result);
            for(int a = 0; a<strlen(buff); a++){
                if(strchr(s, buff[a]) == NULL){
                    ok= 0;
                    break;
                }
            }
            if(ok){
                printf("<%d>\n%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n", ++count, i, j, h, k, result);
            }
        }
    }
    printf("\nThe number of solutions = %d", count);
    return 0;
}