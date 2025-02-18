#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//preguntamos por los nombres de los tres reyes magos
int longitud(char *aux){
    int seguir=1;
    int cont=0;
    int nletras;
    while(seguir==1){
        if(*(aux+cont)!='\0'){//es lo mismo que aux[cont]
            seguir=1;
            cont++;
        }
        else{
            seguir=0;
        }
    }
    nletras=cont;
    return(nletras);
   
}


int main(){

    char *plista[3];
    char aux[10];
    int nletras;
    int cont;
    int seguir=1;
    int memoria;
    //lEO LA LISTA
    for(cont=0;cont<3;cont++){
        //1.Leo el nombre del rey mago
        printf("\nDi el nombre del rey mago %d: ",cont+1);
        //2. Lo guardo en aux
        scanf("%s",aux);
        //3. Cuento cuántas letras tiene
        nletras=longitud(aux);
        //4. Busco en la memoria RAM un hueco de ese tamaño
        //5. Obtengo la dirección de memoria donde está
        //ese hueco
        memoria=nletras*sizeof(char);
        plista[cont]=(char*) malloc(memoria); // Es el acrónimo de Memory ALLOCation
        strcpy(plista[cont],aux);
       
    }
    //MUESTRO LA
    printf("\nLOS REYES MAGOS SON: ");
    for(cont=0;cont<3;cont++){
        printf("\n %s",plista[cont]);
       
    }
   
    return 0;
   
}