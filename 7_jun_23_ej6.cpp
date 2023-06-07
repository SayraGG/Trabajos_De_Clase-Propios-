#include<stdio.h>
#define MAX 10000
int main(int argc,char const *argv[])
{
	printf("Ejemplo 1\n");
	char i;
	for ( i= 'A'; i<='Z';++i)
	{
		printf("%c\n",i);
	}
	printf("\n");
	printf("\n");
	printf("Ejemplo 2\n");
	char c;
	for(c = '0'; c<='9'; ++c)
	{
		printf("%c\n",c);
	}
	printf("\n");
	printf("\n");
	printf("Ejemplo 3\n");
	for ( int i=0;i<= 100; i=i+2)
	{
		printf("%d\n",i);
	}
	printf("\n");
	printf("\n");
	printf("Ejemplo 4");
	int o,j;
	for( o = 0, j=MAX; o > j; ++o,j--)
	{
		printf("%d\n",(i+2*j) );
	}
	return 0;
}


