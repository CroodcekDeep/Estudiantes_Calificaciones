#ifndef ESTUDIANTE_CALIFICACION_CALIFICACIONES_H
#define ESTUDIANTE_CALIFICACION_CALIFICACIONES_H

// Definición de constantes para las dimensiones de la matriz
#define NUM_ESTUDIANTES 30
#define NUM_EVALUACIONES 6

// Matriz de calificaciones
extern int calificaciones[NUM_ESTUDIANTES][NUM_EVALUACIONES];

// Prototipos de funciones
void inicializarCalificaciones();

int asignarCalificacion(int estudiante, int evaluacion, int calificacion);

float promedioEstudiante(int estudiante);

float promedioCurso(int evaluacion);

void guardarCalificacionesEnArchivo();

#endif
