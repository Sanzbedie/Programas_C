#include<stdio.h>//La almohadilla es una instrucción al preprocesador.

int main(){
	int tabla;
	int cont;
	//Definicion de variables
	//Me pide la tabla de un número y la escribe
	//Un bucle muestra linea a linea la tabla
	int c=1;
	int res;
	printf("Dime la tabla deseada (1-10): ");
	scanf("%d",&tabla);
	for(cont=1;cont<=10;cont++){
	
		res = tabla*cont ;
		printf("\n%d",res);
	}
	return 0;	
}