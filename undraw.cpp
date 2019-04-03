#include<cstdio>
#include<cstdlib>
#include<cstring>

int  main(int argc,char* argv[])
{
	int x= atoi(argv[1]);
	int y= atoi(argv[3]);
    // printf("%s\n", argv[0]);
    printf("%c\n", argv[2]);
	switch(*argv[2])
	{
		case '+':
			printf( "%d + %d  = %d", x, y, x+y);
			break;
		case '-':
			printf( "%d - %d  = %d", x, y, x-y);
			break;
		case '*':
			printf( "%d * %d  = %d", x, y, x*y); 
			break;
		case '/':
			printf( "%d / %d  = %d", x, y, x/y);
			break;
		default:
			printf( "Correct use: x +(-*/) y ");
			break;
		 
		}
		getchar();
        return 0;
}

