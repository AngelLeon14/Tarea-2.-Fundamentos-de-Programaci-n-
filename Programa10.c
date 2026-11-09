/*León Flores Ángel Ricardo 
Tarea 2. Programa 10
Lectura de 100 números enteros y determinación de cuántos de ellos son positivos, negativos o nulos*/

#include <stdio.h>
int main()
{
  int num, pos = 0, neg = 0, nul = 0;
  for(int i = 0; i < 100; i++)
  {
    printf("Ingrese el Entero número %d: ", i + 1);
    scanf("%d", &num);
    if(num == 0)
    {
      nul = 1 + nul;
    }
    else
    {
      if(num < 0)
      {
        neg = 1 + neg;
      }
      else
      {
        pos = 1 + pos;
      }
    }
  }
  printf("La cantidad de números positivos fue de: %d\n", pos);
  printf("La cantidad de números negativos fue de: %d\n", neg);
  printf("La cantidad de números nulos fue de: %d\n", nul);
}
