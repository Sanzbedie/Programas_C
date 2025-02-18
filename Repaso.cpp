#define N 5
char palabra[N];
for(int cont=0;cont < N;cont++){
	printf("\n letra %d",cont);
	scanf("%c",&palabra[cont]);
}
//%d si &
//%f si &
//%c si &
//%s no &

#define S 5
char *palabra;
palabra=(char)malloc(N*sizeof(char));
for(int cont=0;cont<N;cont++){
	printf("\n letra %d",cont);
	scanf("%c",palabra+cont);
}

char *palabra;
char aux[30];
printf("\n Dime tu nombre:");
scanf("%s",aux);
int tamanio = lenght(aux);
palabra=(char*)malloc(tamanio*sizeof(char))
strcpy(palabra,aux);
