#include<stdio.h>

int main(){
	struct Articulo{
		int cod;
		float precio;
		char existe;
	};
	struct Articulo m1;
	m1.cod=1;
	m1.precio=1.30;
	m1.existe='s';
	printf("\nARTICULOS: ");
	printf("\nCODIGO\tPRECIO\tEXISTENCIA");
	printf("\n%d\t%f\t%c");
	
	return 0;
}