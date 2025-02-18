#include<stdio.h>

int main(){
	int numeros[2];//es un vector, array, formacion.
	int aux;
	numeros[0]=2;
	numeros[1]=3;
	printf("\n Vamos a ver que es numeros");
	printf("\n numeros=%p",numeros);
	printf("\n ANTES DEL INTERCAMBIO");
	printf("\n numeros[0]= %d",numeros[0]);
	printf("\n numeros[1]= %d",numeros[1]);
	printf("\n numeros=%p",*numeros);
	printf("\n numeros=%p",*(numeros+1));
	printf("\n DESPUES DEL INTERCAMBIO");
	aux=numeros[0];
	numeros[0]=numeros[1];
	numeros[1]=aux;
	printf("\n numeros[0]= %d",numeros[0]);
	printf("\n numeros[1]= %d",numeros[1]);
	return 0;
}