/*León Flores Ángel Ricardo 
Tarea 2. Programa 6
Aumento del 12% y 15% al salario dependiendo de cuánto gane cada trabajador*/

#include <stdio.h>
int main()
{
  float sueldo, aumento; 
  printf("Ingrese el sueldo actual: $");
  scanf("%f", &sueldo);
  if (sueldo < 1000)
  {
    aumento = sueldo + (sueldo * 0.15);
    printf("El aumento de sueldo sería de: $%.2f", aumento);
  }
  else 
  {
    aumento = sueldo + (sueldo * 0.12);
    printf("El aumento de sueldo sería de: $%.2f", aumento);
  }
  return 0; 
}
