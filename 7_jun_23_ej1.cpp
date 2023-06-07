#include<stdio.h>
int main()
{
	int digito_leido=0; //Aqui esta la bandera
	char car;
	while (!digito_leido)
	{
		puts("Introduzca un caracter: ");
		scanf("%c", &car);
		digito_leido=(('0'<=car)) && (('9'<=car));
	}
	return 0;
}
