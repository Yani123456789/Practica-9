#include <stdio.h>
int main () 
{
  int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional 
  int indice = 0;
  printf("\tLista\n");
  do // Acceso a cada elemento del arreglo unidimensional usando do-while
  {
    printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
    indice += 1;
  }
  while (indice < 5 ); 
  printf("\n");
  return 0;
}
