#include<stdio.h>
//posicion de memoria
int main(){
	int x;
	int *px;
	//px es un puntero a una variable de tipo entero
	x=3;
	px =&x;//& = direccion de memoria
	printf("x = %d dirreccion x = %p",x);
	printf(" desde px, x=%d",*px);
	return 0;
	
}
//tipo de dato int
//valor variable 3
//direccion de la variable BB1098