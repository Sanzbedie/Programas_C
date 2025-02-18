#include<stdio.h>
void intercambia(int *pa,int *pb){
	int *paux;
	paux = pa;
	pa = pb;
	pb = paux;
	printf("\n En la funcion");
	printf("\na = %d",*pa);
	printf("\nb = %d",*pb);
}

int main(){
	int a,b,aux;
	printf("\n Antes del intercambio");
	a=2;
	b=3;
	printf("\na = %d",a);
	printf("\nb = %d",b);
	printf("\n Envio &a=%p ,&b=%p ",&a,&b);
	intercambia(&a,&b);
	printf("\n Despues del intercambio");
	printf("\n Recivo &a=%p ,&b=%p ",&a,&b);
	printf("\na = %d",a);
	printf("\nb = %d",b);
	return 0;
}