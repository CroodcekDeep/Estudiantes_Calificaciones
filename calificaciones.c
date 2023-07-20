#include <stdio.h>
#include "calificaciones.h"

int calificaciones[NUM_ESTUDIANTES][NUM_EVALUACIONES];

void inicializarCalificaciones() {
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        for (int j = 0; j < NUM_EVALUACIONES; j++) {
            calificaciones[i][j] = -1;
        }
    }
}