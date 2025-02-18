#include<stdio.h>
#define DISTANCIA 3

int main(){
    //defino la estructura
    struct Alumnos{
        char nombre[20];
        char apellidos[20];
        float nota;    
    };
    //Defino un vector de 5 alumnos
    struct Alumnos misAlumnos[DISTANCIA];
    int cont;
   
    printf("\nINTRODUCE ALUMNOS: ");
    for(cont=0;cont<DISTANCIA;cont++){
        printf("\nNombre alumno %d: ",cont+1);
        scanf("%s",misAlumnos[cont].nombre);
        printf("\nApellidos alumno %d: ",cont+1);
        scanf(" %s",misAlumnos[cont].apellidos);
        printf("\nNota alumno %d: ",cont+1);
        scanf("%f",&misAlumnos[cont].nota);    
    }
    printf("\nLISTA DE ALUMNOS Y SUS NOTAS: ");
    printf("\nNOMBRE\tAPELLIDOS           \tNOTA");
    for(cont=0;cont<DISTANCIA;cont++){
        printf("\n%s\t%s\t%5.2f",misAlumnos[cont].nombre,misAlumnos[cont].apellidos,misAlumnos[cont].nota);
    }
    float suma=0;
    float media;
    for(cont=0;cont<DISTANCIA;cont++){
        suma=suma+misAlumnos[cont].nota;
    }
    media=suma/DISTANCIA;
    printf("\nLa media vale %.2f",media);
    return 0;
   
   
}