/*León Flores Ángel Ricardo
Tarea 2. Programa 14
Arreglo unidimensional de enteros y determinación de cuántas veces se encuentra un número dentro del arreglo*/

#include <stdio.h>
int main() 
{
  int n, i, buscado, contador = 0;
  printf("Ingrese el tamaño del arreglo: ");
  scanf("%d", &n);
  if (n <= 0) 
  {
    printf("El tamaño del arreglo debe ser mayor que 0.\n");
    return 1;
  }
  int arreglo[n];
  printf("Ingrese los %d elementos enteros del arreglo:\n", n);
  for (i = 0; i < n; i++) 
  {
    printf("  Elemento [%d]: ", i + 1);
    scanf("%d", &arreglo[i]);
  }
  printf("\nIngrese el número que desea buscar en el arreglo: ");
  scanf("%d", &buscado);
  for (i = 0; i < n; i++)
  {
    if (arreglo[i] == buscado) 
    {
      contador++;
    }
  }
  printf("\nEl número %d se encuentra %d vez/veces en el arreglo.\n", buscado, contador);
  return 0;
}
