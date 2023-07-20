# Examen - Alejo Acosta

1. Define una matriz de 30 filas por 6 columnas para almacenar las calificaciones de los estudiantes.

2. Crea un archivo de cabecera propio llamado "`calificaciones.h`" para declarar la matriz y las funciones relacionadas.

3. Asegúrate de que las calificaciones sean números enteros entre 0 y 100.

4. Implementa una función llamada "`inicializarCalificaciones`" que establezca todas las calificaciones en la matriz con
   el valor -1. Esto indicará que las calificaciones aún no han sido asignadas.

5. Crea otra función llamada "`asignarCalificacion`" para asignar una calificación específica a un estudiante para una
   evaluación particular. Asegúrate de que esta función verifique que los índices de la matriz y la calificación sean
   válidos.

6. Desarrolla una función llamada "`promedioEstudiante`" para calcular el promedio de las calificaciones de un estudiante
   en particular y devolver este valor. Si una calificación aún no ha sido asignada (valor -1), no debe ser tomada en
   cuenta para el promedio.

7. Implementa una función llamada "`promedioCurso`" que calcule el promedio de las calificaciones de toda la clase para
   una evaluación específica.

8. Utiliza punteros donde sea necesario para acceder y manipular datos de manera eficiente.

9. Cada vez que se asigne una nueva calificación, guarda el estado actual de la matriz de calificaciones en un archivo
   de texto llamado "`calificaciones.txt`".

10. En el archivo "`main.c`", crea un menú que permita al usuario seleccionar diferentes opciones, como asignar
    calificación a un estudiante, calcular el promedio de un estudiante o el promedio del curso