#include<stdio.h>

int main(){
	struct partido{
		char equi1[20];
		char equi2[20];
		int gol1;
		int gol2;
		char fecha[10];
	};
	int part=3;
	struct partido misPartidos[part];
	int cont;
	for(cont=0;cont<part;cont++){
		printf("\n EQUIPO 1");
		scanf("%s",misPartidos[cont].equi1);
		printf("\n EQUIPO 2");
		scanf("%s",misPartidos[cont].equi2);
		printf("\n GOL1");
		scanf("%d",&misPartidos[cont].gol1);
		printf("\n GOL2");
		scanf("%d",&misPartidos[cont].gol2);
		printf("\n FECHA");
		scanf("%s",misPartidos[cont].fecha);
	}
	for(cont=0;cont<part;cont++){
	if(misPartidos[cont].gol1>misPartidos[cont].gol2){
		printf("\n1");
	}
	else if(misPartidos[cont].gol1<misPartidos[cont].gol2){
		printf("\n2");
	}
	else{
		printf("\nX");
	}
}
	return 0;
}