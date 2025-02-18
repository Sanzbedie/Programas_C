#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir la estructura del partido
struct Partido {
    char* equipo1;     // Nombre del equipo 1
    char* equipo2;     // Nombre del equipo 2
    int goles_equipo1; // Goles del equipo 1
    int goles_equipo2; // Goles del equipo 2
    char* fecha;       // Fecha del partido
};

// Función para almacenar 3 partidos en memoria RAM
void almacenar_partidos(struct Partido partidos[3]) {
    // Asignar memoria dinámica para los nombres de los equipos y las fechas
    partidos[0].equipo1 = (char*) malloc(30 * sizeof(char));
    partidos[0].equipo2 = (char*) malloc(30 * sizeof(char));
    partidos[0].fecha = (char*) malloc(15 * sizeof(char));
    
    strcpy(partidos[0].equipo1, "Real Madrid");
    strcpy(partidos[0].equipo2, "Barcelona");
    partidos[0].goles_equipo1 = 2;
    partidos[0].goles_equipo2 = 1;
    strcpy(partidos[0].fecha, "2025-02-10");

    partidos[1].equipo1 = (char*) malloc(30 * sizeof(char));
    partidos[1].equipo2 = (char*) malloc(30 * sizeof(char));
    partidos[1].fecha = (char*) malloc(15 * sizeof(char));
    
    strcpy(partidos[1].equipo1, "Atletico Madrid");
    strcpy(partidos[1].equipo2, "Sevilla");
    partidos[1].goles_equipo1 = 1;
    partidos[1].goles_equipo2 = 1;
    strcpy(partidos[1].fecha, "2025-02-11");

    partidos[2].equipo1 = (char*) malloc(30 * sizeof(char));
    partidos[2].equipo2 = (char*) malloc(30 * sizeof(char));
    partidos[2].fecha = (char*) malloc(15 * sizeof(char));
    
    strcpy(partidos[2].equipo1, "Valencia");
    strcpy(partidos[2].equipo2, "Real Betis");
    partidos[2].goles_equipo1 = 3;
    partidos[2].goles_equipo2 = 0;
    strcpy(partidos[2].fecha, "2025-02-12");
}

// Función para mostrar los partidos por pantalla
void mostrar_partidos(struct Partido partidos[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Partido %d:\n", i+1);
        printf("Fecha: %s\n", partidos[i].fecha);
        printf("Equipo 1: %s\n", partidos[i].equipo1);
        printf("Equipo 2: %s\n", partidos[i].equipo2);
        printf("Resultado: %d - %d\n", partidos[i].goles_equipo1, partidos[i].goles_equipo2);
        printf("\n");
    }
}

// Función para obtener el resultado de un partido (1, X, 2)
char obtener_resultado(struct Partido partido) {
    if (partido.goles_equipo1 > partido.goles_equipo2) {
        return '1'; // Gana el equipo 1
    } else if (partido.goles_equipo1 < partido.goles_equipo2) {
        return '2'; // Gana el equipo 2
    } else {
        return 'X'; // Empate
    }
}

int main() {
    // Crear un arreglo de partidos
    struct Partido partidos[3];

    // Llamar a la función para almacenar los partidos
    almacenar_partidos(partidos);

    // Mostrar los partidos
    mostrar_partidos(partidos);

    // Mostrar el resultado de cada partido
    for (int i = 0; i < 3; i++) {
        printf("Resultado del partido %d: %c\n", i+1, obtener_resultado(partidos[i]));
    }

    // Liberar la memoria dinámica
    for (int i = 0; i < 3; i++) {
        free(partidos[i].equipo1);
        free(partidos[i].equipo2);
        free(partidos[i].fecha);
    }

    return 0;
}

