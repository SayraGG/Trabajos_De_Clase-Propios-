#include<stdio.h>
void func1(void){
	puts("Segunda funcion ");
}
int func2()
{
	puts("Tercera funcion");
	return 0;
}
int main()
{
	puts("Primera funcion ");
	func1();
	func2();
	return 0;
}

