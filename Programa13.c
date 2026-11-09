/*León Flores Ángel Ricardo 
Tarea 2. Programa 13
Suma de los elementos de un arreglo*/

#include <stdio.h>
int main()
{
  int suma = 0, k; 
  int arr[k]; 
  printf("Ingrese el tamaño del arreglo: ");
  scanf("%d", &k);
  for(int i = 0; i < k; i++)
  {
    printf("Ingrese el valor %d del arreglo: ", i + 1);
    scanf("%d", &arr[i]);
    suma = suma + arr[i];
  }
  printf("La suma de los elementos del arreglo es: %d", suma);
}
