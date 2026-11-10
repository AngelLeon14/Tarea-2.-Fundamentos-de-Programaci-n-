/*León Flores Ángel Ricardo
Tarea 2. Programa 15
Arreglo unidimensional de enteros y determinación de cuántos de sus elementos son positivos, negativos o nulos.*/


#include <stdio.h>
int main() 
{
  int n, i;
  int positivos = 0, negativos = 0, nulos = 0;
  printf("Ingrese el tamaño del arreglo: ");
  if (scanf("%d", &n) != 1 || n <= 0) 
  {
    printf("Por favor, ingrese un tamaño válido mayor a 0.\n");
    return 1;
  }
  int arreglo[n];
  printf("Ingrese los %d elementos enteros:\n", n);
  for (i = 0; i < n; i++) 
  {
    printf("Elemento [%d]: ", i + 1);
    scanf("%d", &arreglo[i]);
    if (arreglo[i] > 0) 
    {
      positivos++;
    } 
    else 
    {
      if (arreglo[i] < 0) 
      {
        negativos++;
      } 
      else
      {
        nulos++;
      }
    }
  }
  printf("\n--- Resultados del análisis ---\n");
  printf("Números positivos: %d\n", positivos);
  printf("Números negativos: %d\n", negativos);
  printf("Números nulos (ceros): %d\n", nulos);
  return 0;
}
