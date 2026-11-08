/*León Flores Ángel Ricardo 
Tarea 2. Programa 4
Ganancia al finalizar el mes de un monto invertido en un banco y a una cierta tasa de interés mensual*/

#include <stdio.h>
int main()
{
  float monto, interes, total, ganancia; 
  printf("Ingresa la cantidad de dinero invertida en el banco: ");
  scanf("%f", &monto);
  printf("Ingresa el porcentaje de interés mensual: ");
  scanf("%f", &interes);
  ganancia = monto * (interes / 100);
  total = monto + ganancia; 
  printf("Dinero recibido al finalizar el mes: %f", total);
  return 0;
}
