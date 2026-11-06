/*León Flores Ángel Ricardo 
Tarea 2. Programa 3
Conversión de dólares a pesos*/

#include <stdio.h>
#define pesos 11.96
int main()
{
  float dolar, peso; 
  printf("Ingrese la cantidad de dólares que desea convertir a pesos: ");
  scanf("%f", &dolar);
  peso = dolar * pesos;
  printf("La cantidad de %f dólares equivale a: %f pesos", dolar, peso);
  return 0;
}
