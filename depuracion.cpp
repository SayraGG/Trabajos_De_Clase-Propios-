#include<stdio.h>
int main()
{
float c[5];
float r;
printf("Depurar el siguiente programa: \n");

for(int i=0; i<5; i++){ 
scanf("%f",&c[i]);
r=r+c[i];
} 
printf ("%f\n",r/5);
}
