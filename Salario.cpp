include<stdio.h>
#include<stdio.h>
#include<string.h>
#define MAX_STRLEN 256


int main() {
	float bono;
	float descuento;
	int op;
	char respuesta[MAX_STRLEN];
	float sueldo;
	float sueldobruto;
	printf("ingresa el sueldo\n");
	scanf("%f",&sueldo);
	do {
		printf("que operacion deseas realizar\n");
		printf("1 descuento\n");
		printf("2 bono\n");
		printf("3 sueldo bruto\n");
		scanf("%i",&op);
		switch (op) {
		case 1:
			descuento = sueldo*.10;
			printf("el salario con descuento es : %f\n",descuento);
			printf("desea hacer otra operacion 1si,2,no\n");
			scanf("%s",respuesta);
			break;
		case 2:
			bono = sueldo*.15;
			printf("el bono es :  %f\n",bono);
			printf("desea hacer otra operacion 1si,2,no\n");
			scanf("%s",respuesta);
			printf("desea hacer otra operacion 1si,2,no\n");
			break;
		case 3:
			sueldobruto = sueldo+bono;
			printf("el sueldo bruto es:  %f\n",sueldobruto);
			printf("desea hacer otra operacion 1si,2,no\n");
			scanf("%s",respuesta);
			break;
		}
	} while (strcmp(respuesta,"2")!=0);
	return 0;
}
