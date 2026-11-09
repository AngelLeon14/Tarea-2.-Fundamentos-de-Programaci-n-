/*León Flores Ángel Ricardo 
Tarea 2. Programa 16
Almacenar en un arreglo unidimensional los 100 primeros números pares*/

#include <stdio.h>
int main()
{
  int arr[100];
  int indice = 0;
  for(int num = 1; indice < 100; num++)
  {
    if(num % 2 == 0)
    {
      arr[indice] = num;
      indice ++;
    }
  }
  printf("Los 100 primeros números pares son: \n");
  for(int i = 0; i < 100; i++)
  {
    printf("%d\n", arr[i]);
  }
  return 0;
}
