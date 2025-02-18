#include<stdio.h>


int main(){
	FILE *archivo;
	archivo = fopen("prueba2.txt","w");
	fprintf(archivo,"Rey,edad\n");
	fprintf(archivo,"Melchor,450\n");
	fprintf(archivo,"Gaspar,120\n");
	fprintf(archivo,"Baltasar,500\n");
	fclose(archivo);
	
	return 0;
}