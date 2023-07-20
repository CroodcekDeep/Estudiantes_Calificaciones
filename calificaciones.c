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

    //Comprobar calificación
    if (calificacion < 0 || calificacion > 100) {
        return 0; // Calificación inválida
    }

    calificaciones[estudiante][evaluacion] = calificacion;
    guardarCalificacionesEnArchivo();
    return 1;
}

float promedioEstudiante(int estudiante) {
    float suma = 0;
    int numCalificaciones = 0;

    for (int j = 0; j < NUM_EVALUACIONES; j++) {
        // Si tiene una calificación de -1, no se cuenta
        if (calificaciones[estudiante][j] != -1) {
            suma += calificaciones[estudiante][j];
            numCalificaciones++;
        }
    }

    if (numCalificaciones > 0) {
        // Calcular promedio
        return suma / numCalificaciones;
    } else {
        // No hay calificaciones válidas
        return 0.0;
    }
}

float promedioCurso(int evaluacion) {
    float suma = 0;
    int numCalificaciones = 0;

    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        // Si tiene una calificación de -1, no se cuenta
        if (calificaciones[i][evaluacion] != -1) {
            suma += calificaciones[i][evaluacion];
            numCalificaciones++;
        }
    }

    if (numCalificaciones > 0) {
        return suma / numCalificaciones;
    } else {
        // No hay calificaciones válidas
        return 0.0;
    }
}