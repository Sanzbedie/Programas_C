#include<stdio.h>
#define DISTANCIA 3

int main(){
    struct Alumnos{
    	char nombre[20];
    	char ape[20];
    	char llido[20];
        float nota;   
    };
    struct Alumnos m[DISTANCIA];
    int cont;
    printf("\nINTRODUCE ARTICULOS: ");
    for(cont=0;cont<DISTANCIA;cont++){
        printf("\nNOMBRE: ");
        scanf("%s",m[cont].nombre);
        printf("\nAPELLIDO1: ");
        scanf("%s",m[cont].ape);
        printf("\nAPELLIDO2: ");
  		scanf("%s",m[cont].llido);
  		printf("\nNOTA: ");
  		scanf(" %f",&m[cont].nota);
    }
    printf("\nAlumnos: ");
    printf("\nNOMBRE    \tAPELLIDO1 \tAPELLIDO2 \tNOTA");
    for(cont=0;cont<DISTANCIA;cont++){
        printf("\n%10s\t%10s\t%10s\t%.2f",m[cont].nombre,m[cont].ape,m[cont].llido,m[cont].nota);
    }
    float suma=0;
    float media;
    for(cont=0;cont<DISTANCIA;cont++){
    	suma+=m[cont].nota;
	}
	media=suma/DISTANCIA;
	printf("\nLa media vale %.2f",media);
    return 0;   
}