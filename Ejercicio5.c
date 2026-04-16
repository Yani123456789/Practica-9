#include <stdio.h>
int main () 
{
  int arr[] = {5, 4, 3, 2, 1};
  int *apArr;//Se declara el apuntador apArr
  int x;
  apArr = arr;
  printf("int arr[] = {5, 4, 3, 2, 1};\n");
  printf("apArr = &arr[0]\n");
  x = *apArr; /*A la variable x se le asigna el contenido del arreglo arr en su
  elemento 0*/
  printf("x = *apArr \t -> x = %d\n", x);
  x = *(apArr+1); /*A la variable x se le asigna el contenido del arreglo arr en su elemento 1*/
  printf("x = *(apArr+1) \t -> x = %d\n", x);
  x = *(apArr+2); /*A la variable x se le asigna el contenido del arreglo arr en su elemento 2*/
  printf("x = *(apArr+2) \t -> x = %d\n", x);
  x = *(apArr+3); /*A la variable x se le asigna el contenido del arreglo arr en su elemento 3*/
  printf("x = *(apArr+3) \t -> x = %d\n", x);
  x = *(apArr+4); /*A la variable x se le asigna el contenido del arreglo arr en su elemento 4*/
  printf("x = *(apArr+2) \t -> x = %d\n", x);
  return 0; 
}
