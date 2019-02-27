#include<stdio.h>
#include<string.h>
int main(){
    double a[] = {1.0,2.0,3.0};
    double b[3];
    memcpy(b, a, sizeof(double)*3);
    for(int i=0;i<3;i++){
        printf("%f\n",b[i]);
    }
    printf("length_f %d\n", sizeof(float));
    printf("length_f %d", sizeof(double));
}
