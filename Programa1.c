/*León Flores Ángel Ricardo 
Tarea 2. Programa 1
Cálculo de la suma, resta y multiplicación de dos números ingresados por el usuario*/

#include <stdio.h>
int main()
{
  int num1, num2, sum, res, mul;
  printf("Ingresa el valor del primer número: \n");
  scanf("%d", &num1);
  printf("Ingresa el valor del segundo número: \n");
  scanf("%d", &num2);
  sum = num1 + num2;
  res = num1 - num2;
  mul = num1 * num2;
  printf("La suma de los números %d y %d es: %d\n", num1, num2, sum);
  printf("La resta de los números %d y %d es: %d\n", num1, num2, res);
  printf("La multiplicación de los números %d y %d es: %d\n", num1, num2, mul);
  return 0; 
}
