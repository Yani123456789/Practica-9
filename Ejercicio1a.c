#include <stdio.h>
int main () 
{
  int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional   
  int indice = 0;
  printf("\tLista\n");
  while (indice < 5 ) // Acceso a cada elemento del arreglo unidimensional usando while 
  {
    printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
    indice += 1; // Sentencia análoga a indice = indice + 1; 
  }

  printf("\n");
  return 0; 
}
