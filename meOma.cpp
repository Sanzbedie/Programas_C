#include<stdio.h>
int main(){
	//Condicional
	int edad;
	printf("Dime tu edad: ");
	scanf("%d",&edad);
	if(edad<18){
		printf("\nEres mayor de edad");
	}
	else{
		printf("\nEres menor de edad");
	}
}