#include <stdio.h>

int main() {
   int n = 10;  // número de alumnos
   int notas[n]; // array para almacenar las notas
   int i, sum = 0; // variable para sumar las notas

   // pedir las notas de los alumnos y guardarlas en el array
   for (i = 0; i < n; i++) {
      printf("Ingrese la nota del alumno %d: ", i+1);
      scanf("%d", &notas[i]);
      sum += notas[i];
   }

   // calcular el promedio
   float promedio = (float)sum / n;

   // imprimir las notas y el promedio
   printf("\nNotas de los alumnos: \n");
   for (i = 0; i < n; i++) {
      printf("Alumno %d: %d\n", i+1, notas[i]);
   }
   printf("\nPromedio: %.2f\n", promedio);

   return 0;
}
