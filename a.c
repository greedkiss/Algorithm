#include<stdio.h>
#include<stdlib.h>
void foo(void){
	printf("bye!\n");
}
int main(){
	atexit(&foo);
	printf("endof main\n");
	//int *p = (int*)0x12345678;
	//printf("%d",*p);
}
