// #include<stdio.h>
// #include<string.h>
// char letter[];
// const left = 6; 
// int deletChar (char a){

// }
// int main(){
//     int round;
//     int win =0, lose=0, check=0;
//     char a;
//     scanf("%d",&round);
//     scanf("%s",letter);
//     while((scanf("%c", a) && a != "-1"){
//         int i = deletChar(a)
//         if(i == 0){
//             win = 1;
//             break;
//         }else if(i == 1){
//             left--;
//         }
//         if(!left){
//             lose = 1;
//             break;
//         }
//         if(a-'0' > 0){

//         }

//     }
//     return 0;
// }
#include<stdio.h>
#include<string.h>
#define max 100
int chance, left;
char s[max], g[max];
int win, lose;
void judge(char a){
    int h= 1;
    for(int i = 0; i<strlen(s);i++){
        if(a == s[i]){
            left--;
            s[i]= ' ';
            h=0;
        }
    }
    if(h) {
        chance--;
    }
    if(!left){
        win = 1;
    }
    if(!chance){
        lose = 1;
    }
}
int main(){
    int rnd;
    while(scanf("%d %s %s", &rnd, s, g) == 3 && rnd != -1){
        printf("ROUND %d\n", rnd);
        chance = 7;
        left = strlen(s);
        win = 0;
        lose = 0;
        for(int i=0; i< strlen(g); i++){
            judge(g[i]);
            if(win || lose)
                break;
        }
        if(win) printf("YOU WIN \n");
        else if(lose) printf("YOU LOSE\n");
        else printf("you checked out\n");
    }
    return 0;
}