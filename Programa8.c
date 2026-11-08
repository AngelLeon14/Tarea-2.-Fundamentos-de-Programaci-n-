/*León Flores Ángel Ricardo 
Tarea 2. Programa 8
Determinar si un número es divisor del otro*/

#include <stdio.h>
int main()
{
  int num1, num2, res; 
  printf("Ingrese el primer número entero: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número entero: ");
  scanf("%d", &num2);
  res = num1 % num2;
  if(res == 0)
  {
    printf("El número %d es divisor del número %d", num2, num1);
  }
  else 
  {
    printf("El número %d no es divisor del número %d", num2, num1);
  }
  return 0;
}
