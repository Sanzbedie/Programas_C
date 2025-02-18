#include<stdio.h>

int main(){
    struct Articulo{
        int cod;
        float precio;
        char existe;    
    };
    struct Articulo m1;
    int cont;
    printf("\nINTRODUCE ARTICULOS: ")
	for(cont=0;cont<3;cont++){
    	m[cont].cod=cont+1;
    	printf("\nARTICULO %d",cont+1);
    	printf("\nPRECIO:");
    	scanf("%f",&m[cont].precio);
    	printf("\nEXISTE:");
    	sconf("&c",&m[cont].existe);    	
	}
    printf("\nARTICULOS: ");
    printf("\nCODIGO\tPRECIO\tEXISTENCIA");
    for(cont=0;cont<3;cont++){
	    printf("\n%d\t%.2f\t%c",m1.cod,m1.precio,m1.existe);
	}
    return 0;	   
   
}
