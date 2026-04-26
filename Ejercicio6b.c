#include <stdio.h>
int main ()
{
   int lista[5] = {10, 8, 5, 8, 7};
   int *ap = lista; //Se declara el apuntador ap
   int indice = 0;

   printf("\tLista\n");
     //Se accede a cada elemento del arreglo haciendo uso del ciclo while
   while (indice < 5)
   {
     printf("\nCalificación del alumno %d es %d", indice+1, *(ap+indice));
     indice++;
   }
   printf("\n");
   return 0;
}
