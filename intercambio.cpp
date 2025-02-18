#include<stdio.h>
void intercambia(int a,int b){
	int aux;
	aux = a;
	a = b;
	b = aux;
}

int main(){
	int a,b,aux;
	printf("\n Antes del intercambio");
	a=2;
	b=3;
	printf("\na = %d",a);
	printf("\nb = %d",b);
	intercambia(a,b);
	printf("\n Despues del intercambio");
	printf("\na = %d",a);
	printf("\nb = %d",b);
	return 0;
}