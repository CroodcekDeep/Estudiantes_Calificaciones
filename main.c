#include <stdio.h>
#include <stdlib.h>
#include "calificaciones.h"

void testCalificaciones() {
    printf("Inicializaciones de valores para test...\n");
    // Asignamos calificaciones para el estudiante 1
    // Servira para probar promedioEstudiante, resultado debe ser 88
    asignarCalificacion(1, 0, 85);
    asignarCalificacion(1, 1, 90);
    asignarCalificacion(1, 2, 78);
    asignarCalificacion(1, 3, 95);
    asignarCalificacion(1, 4, 88);
    asignarCalificacion(1, 5, 92);

    // Asignamos calificaciones para la evaluación 2
    // Servira para probar promedioCurso, resultado debe ser 84.67
    asignarCalificacion(0, 2, 80);
    asignarCalificacion(1, 2, 90);
    asignarCalificacion(2, 2, 85);
    asignarCalificacion(3, 2, 70);
    asignarCalificacion(4, 2, 95);
    asignarCalificacion(5, 2, 88);
}

void mostrarMenu() {
    printf("\n-- Menu de opciones --\n");
    printf("1. Asignar calificacion\n");
    printf("2. Promedio del estudiante\n");
    printf("3. Promedio del curso\n");
    printf("0. Salir\n");
    printf("Ingrese el numero de opcion: ");
}

int main() {
    int opcion;
    int estudiante, evaluacion, calificacion;

    inicializarCalificaciones();
    testCalificaciones();

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                system("cls");
                printf("Ingrese el numero de estudiante (0-29): ");
                scanf("%d", &estudiante);
                printf("Ingrese el numero de evaluacion (0-5): ");
                scanf("%d", &evaluacion);
                printf("Ingrese la calificacion (0-100): ");
                scanf("%d", &calificacion);

                if (asignarCalificacion(estudiante, evaluacion, calificacion)) {
                    printf("Calificacion asignada exitosamente.\n");
                } else {
                    printf("Error al asignar calificacion. Indices invalidos.\n");
                }
                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");
                printf("Ingrese el numero de estudiante (0-29): ");
                scanf("%d", &estudiante);
                printf("Promedio del estudiante %d: %.2f\n", estudiante, promedioEstudiante(estudiante));
                system("pause");
                system("cls");
                break;

            case 3:
                system("cls");
                printf("Ingrese el numero de evaluacion (0-5): ");
                scanf("%d", &evaluacion);
                printf("Promedio del curso para evaluacion %d: %.2f\n", evaluacion, promedioCurso(evaluacion));
                system("pause");
                system("cls");
                break;

            case 0:
                system("cls");
                printf("Saliendo del programa.\n");
                system("pause");
                system("cls");
                break;

            default:
                system("cls");
                printf("Opcion invalida. Intente nuevamente.\n");
                system("pause");
                system("cls");
        }

    } while (opcion != 0);

    return 0;
}