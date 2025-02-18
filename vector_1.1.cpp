#include<stdio.h>

int main(){
    //int a,b;
    int numeros[2];//es un vector, array formacion
    int aux;
    numeros[0]=2;
    numeros[1]=3;
    printf("VAMOS a ver que es numeros[]");
    printf("\n numeros=%p",numeros);
	printf("\n ANTES DEL INTERCAMBIO: ");
    printf("\nnumeros[0]= %d",numeros[0]);
    printf("\nnumeros[1]= %d",numeros[1]);    
    //intercambio a tres bandas
    aux=numeros[0];
    numeros[0]=numeros[1];
    numeros[1]=aux;
    printf("\n DESPUES DEL INTERCAMBIO: ");
    printf("\nnumeros[0]= %d",numeros[0]);
    printf("\nnumeros[1]= %d",numeros[1]);    
   
    return 0;
}
