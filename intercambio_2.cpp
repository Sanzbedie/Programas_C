#include<stdio.h>
//Intercambio a tres bandas    
void intercambia(int *pa,int *pb){
    int *paux;
    paux=pa;
    pa=pb;
    pb=paux;
    printf("\n EN la funcion las direcciones: ");
    printf("\na = %d",*pa);
    printf("\nb = %d",*pb);
}

           
int main(){
    //Definicion de variables
    int a;//David
    int b;//Antonio
    int aux;//Jorge
    a=2;
    b=3;
    printf("\nANTES DEL INTERCAMBIO: ");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    //Ahora hacemos el intercambio
    printf("\nEnvio &a=%p , &b=%p",&a,&b);
    intercambia(&a,&b);
    printf("\nDESPUES DEL INTERCAMBIO: ");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    return 0;
}
