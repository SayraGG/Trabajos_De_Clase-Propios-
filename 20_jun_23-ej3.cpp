#include<ctype.h>
#include<stdio.h>
int main()
{
	char resp; 
	char c;
	printf("¿Es masculino o femenino (M/F)?");
	scanf("%c",&resp);
	resp= toupper(resp);
	switch(resp)
	{
		case 'M':
		puts("Es un enfermero");
		break;
		case 'F':
		puts("Es una enfermera");
		break;
		default:
	    puts("No es enfermero ni enfermera");
	    break;
	}
	return 0;
}
