En este ejercicio se apunta a un entero, en el 3.c se apu taba a un caracter 
Por lo que el apuntador tambièn tiene que ser un entero *apEnt
Despuès b se iguala con el apuntador de entero a, entonces b vala a, a=5 entonces b=5
    despuès se le suma uno al apEnt entonces b=
    y despuès se iguala a con apEnt y ahora a=0

#include<stdio.h>
int main () 
{
    int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
    int *apEnt;
    apEnt = &a;
    printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n"); 
    printf("apEnt = &a\n");
    /*A la variable b se le asigna el contenido de la variable a la que apunta apEnt*/
    b = *apEnt;
    printf("b = *apEnt \t-> b = %i\n", b);
    /*A la variable b se le asigna el contenido de la variable a la que apunta apEnt y se le suma uno*/
    b = *apEnt +1;
    printf("b = *apEnt + 1 \t-> b = %i\n", b);
    //La variable a la que apunta apEnt se le asigna el valor cero
    *apEnt = 0;
    printf("*apEnt = 0 \t-> a = %i\n", a);
    /*A apEnt se le asigna la dirección de memoria que tiene el elemento 0 del arreglo c*/
    apEnt = &c[0];
    printf("apEnt = &c[0] \t-> apEnt = %i\n", *apEnt); 
  return 0;
}
