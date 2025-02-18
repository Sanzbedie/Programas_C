#include<stdio.h>

int main(){
	struct Articulo{
		int cod;
		float precio;
		char existe;
	};
	struct Articulo m[3];
	int cont;
	for(cont=0;cont<3;cont++){
		m[cont].cod=cont+1;
		printf("\nARTICULO %d",cont+1);
		printf("\nPRECIO: ");
		scanf(" %f",&m[cont].precio);
		printf("\nEXISTE: ");
		scanf(" %c",&m[cont].existe);
	}
	for(cont=0;cont<3;cont++){
	printf("\nARTICULOS:");
	printf("\nCODIGO\tPRECIO\tEXISTENCIA");
	printf("\n%d\t%.2f\t%c",m[cont].cod,m[cont].precio,m[cont].existe);
}
	return 0;
}
