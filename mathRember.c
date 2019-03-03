#include<stdio.h>
#include<time.h>
#include <stdlib.h>
const char* math[] = {"sin2x", "cos2x", "sin3x", "cos3x", "tan2x", "cot2a", "sin<2>x/2", "cos<2>x/2", "sinx/2", "cosx/2", "tanx/2", "cotx/2", "sin(x+<->y)", "cos(x+<->y)", "tan(x+<->y)", "cot(x+<->y)", "sinxcosy", "cosxsiny", "cosxcosy","sinxsiny","sinx+siny","sinx-siny","cosx+cosy", "cosx-cosy", "tanx(1)","cotx(1)","arctanx(1)","arcsinx(1)","arccosx(1)"};
int main(){
    srand((unsigned)time(NULL));
    int x = rand()%27;
    printf("%s", math[x]);
    return 0;
}