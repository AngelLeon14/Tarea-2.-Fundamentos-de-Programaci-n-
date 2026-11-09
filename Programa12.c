/*León Flores Ángel Ricardo 
Tarea 2. Programa 12
Producto de los N primeros números naturales*/

#include <stdio.h>
int main()
{
  int natural, prod = 1;
  printf("Cálculo del Producto de los N Primeros Números Naturales\n");
  printf("Ingrese cuántos números naturales desea multiplicar: ");
  scanf("%d", &natural);
  for(int i = 1; i < natural + 1; i++)
  {
    prod = prod * i;
  }
  printf("El producto de los %d primeros números naturales es: %d", natural, prod);
}
