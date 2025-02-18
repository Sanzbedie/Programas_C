#include<stdio.h>
//Haz un programa que lea 5 numeros enteros y que haga la media
int main(){ 
//Tipos de datos en c
	int numero,cont;//%d, //%i
	int suma;
	float result=0;//%f
	for(cont=1;cont<=5;cont++){
		printf("\nDi un numero");
		scanf("%d",&numero);
		suma = suma + numero;
	}
	printf("\nLa suma vale =%d",suma);
	result = suma/cont;
	printf("\n%f",result);
	return 0;
}