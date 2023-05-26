#include<stdio.h>
int main(){
	
int a [10] ={1,2,-3,-100,1000,-200,7,1,0};
int mayor= a[0],lug=0;

for (int i=1;i<10;i++){
if (a[i]>mayor){
 mayor=a[i];
 lug=i;
}
}
printf("Esta en el lugar numero :%d\n ",lug);
printf("El numero del arreglo es: %d\n ",mayor);
}
