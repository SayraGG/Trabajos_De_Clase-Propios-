#include<stdio.h>
int main()
{
	char car;
	scanf("%c",&car);
	
	switch (car)
	{
	case 'a': case 'A':
	printf("%c Es una vocal\n", car);
	break;
	case 'e': case 'E':
	printf("%c Es una vocal\n", car);
	break;
	case 'I': case 'i':
	printf("%c Es una vocal\n", car);
	break;
	case 'o': case 'O':
	printf("%c Es una vocal\n", car);
	break;
	case 'u': case 'U':
	printf("%c Es una vocal\n", car);
	break;
	default:
	printf("No es una vocal");
}
return 0;
}
