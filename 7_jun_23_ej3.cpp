#include<stdio.h>
int main(){
	int z,sum,numi,promedio;
	z=1;
	sum=0;
	while(z<=6){
	scanf("%i",&numi);
	sum=sum+numi;
	z=z+1;
	}
	promedio=sum/6;
	printf("El promedio es: %i",promedio);
	
}
