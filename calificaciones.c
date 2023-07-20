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

int asignarCalificacion(int estudiante, int evaluacion, int calificacion) {
    if (estudiante < 0 || estudiante >= NUM_ESTUDIANTES || evaluacion < 0 || evaluacion >= NUM_EVALUACIONES) {
        return 0; // Índices inválidos
    }

    //Comprobar calificacion
    if (calificacion < 0 || calificacion > 100) {
        return 0; // Calificación inválida
    }

    calificaciones[estudiante][evaluacion] = calificacion;
    guardarCalificacionesEnArchivo();
    return 1; // Asignación exitosa
}