#include <stdio.h>

int main() {
    FILE *fichero;
    int numeros[10];
    int i;
    double suma = 0.0;
    fichero = fopen("numeros.txt", "w");
    // ESCRIBIMOS EN EL FICHERO
    printf("Introduce %d números:\n", 10);
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        fprintf(fichero, "%d\n", numeros[i]);
    }
    fclose(fichero);

    // Leer los números del archivo y calcular la suma
    fichero= fopen("numeros.txt", "r");
    printf("\nNumeros leidos del archivo:\n");
    for (i = 0; i < 10; i++) {
        fscanf(fichero, "%d", &numeros[i]);
        printf("%d\n", numeros[i]);
        suma += numeros[i];
    }

    fclose(fichero);

    // Calcular y mostrar la media
    double media = suma / 10;
    printf("\nLa media de los numeros es: %.2f\n", media);

    return 0;
}