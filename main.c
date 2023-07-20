#include <stdio.h>
#include "calificaciones.h"

void mostrarMenu() {
    printf("\n-- Menú de opciones --\n");
    printf("1. Asignar calificación\n");
    printf("2. Promedio del estudiante\n");
    printf("3. Promedio del curso\n");
    printf("0. Salir\n");
    printf("Ingrese el número de opción: ");
}

int main() {
    int opcion;
    int estudiante, evaluacion, calificacion;

    inicializarCalificaciones();

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el número de estudiante (0-29): ");
                scanf("%d", &estudiante);
                printf("Ingrese el número de evaluación (0-5): ");
                scanf("%d", &evaluacion);
                printf("Ingrese la calificación (0-100): ");
                scanf("%d", &calificacion);

                if (asignarCalificacion(estudiante, evaluacion, calificacion)) {
                    printf("Calificación asignada exitosamente.\n");
                } else {
                    printf("Error al asignar calificación. Índices inválidos.\n");
                }
                break;

            case 2:
                printf("Ingrese el número de estudiante (0-29): ");
                scanf("%d", &estudiante);
                printf("Promedio del estudiante %d: %.2f\n", estudiante, promedioEstudiante(estudiante));
                break;

            case 3:
                printf("Ingrese el número de evaluación (0-5): ");
                scanf("%d", &evaluacion);
                printf("Promedio del curso para evaluación %d: %.2f\n", evaluacion, promedioCurso(evaluacion));
                break;

            case 0:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }

    } while (opcion != 0);

    return 0;
}
