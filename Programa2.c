/*León Flores Ángel Ricardo 
Tarea 2. Programa 2
Cálculo del área y perímetro de una circunferencia dado su radio*/

#include <stdio.h>
#define pi 3.1416
int main()
{
  float radio, area, perimetro; 
  printf("Ingresa el valor del radio de la circunferencia: ");
  scanf("%f", &radio);
  area = pi * radio * radio;
  perimetro = 2 * pi * radio;
  printf("El área de la circunferencia de radio %f es: %f\n", radio, area);
  printf("El perímetro de la circunferencia de radio %f es: %f\n", radio, perimetro);
  return 0;
}
