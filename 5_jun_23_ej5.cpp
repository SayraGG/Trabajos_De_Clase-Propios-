/*Elaborar un programa que resuelva la siguiente seleccion: Apartir de una conderacion asignada con la siguiente escala:
 a) Excelente
 b) Notable
 c) Sficiente
 d, f) No aplicable para esta nota*/
 #include <stdio.h>
 int main()
 {
   char car;
	scanf("%c",&car);
	
	switch (car)
	{
	case 'a': case 'A':
	printf("%c Excelente!!\n", car);
	break;
	case 'b': case 'B':
	printf("%c Notable :)\n", car);
	break;
	case 'c': case 'C':
	printf("%c Suficiente \n", car);
	break;
	case 'd': case 'D': case'f': case 'F':
	printf("%c No aplicable :(\n", car);
	break;
	default:
		printf("No se reconoce la instruccion");
 }
 }
