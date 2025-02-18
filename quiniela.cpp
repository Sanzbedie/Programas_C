#include<stdio.h>

char quiniela(int gol1,int gol2){
    char resultado;
    if(gol1>gol2){
        resultado='1';
    }
    if(gol1<gol2){
        resultado='2';
    }
    if(gol1==gol2){
        resultado='X';
    }
    return(resultado);    
   
}


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
    //MOSTRAMOS LOS RESULTADOS
    printf("\nEQUIPO1\tEQUIPO2\tgoles1\tgoles2\tquiniela");
    for(cont=0;cont<part;cont++){
        printf("\n%s\t%s\t%d\t%d\t%c",misPartidos[cont].equi1,misPartidos[cont].equi2,misPartidos[cont].gol1,misPartidos[cont].gol2,quiniela(misPartidos[cont].gol1,misPartidos[cont].gol2));
    }
    return 0;
}
