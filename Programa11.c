/*León Flores Ángel Ricardo 
Tarea 2. Programa 11
Suma de los números pares comprendidos entre 10 y 50*/

#include <stdio.h>
int main()
{
  int suma = 0;
  for(int i = 11; i < 50; i++)
  {
    if(i % 2 == 0)
    {
      suma = suma + i;
    }
  }
  printf("La suma de los números pares comprendidos entre el 10 y el 50 es: %d", suma);
}
