/*León Flores Ángel Ricardo 
Tarea 2. Programa 7
Cálculo del precio de un ticket de ferrocarril a partir de la distancia de ida y del tiempo de estancia*/

#include <stdio.h>
int main()
{
  float distancia, precio, dtotal; 
  int estancia;
  printf("Ingrese la distancia de ida en kilómetros: ");
  scanf("%f", &distancia);
  printf("Ingrese el tiempo de estancia en días: ");
  scanf("%d", &estancia);
  dtotal = 2 * distancia;
  if(estancia > 7 && dtotal > 800)
  {
    precio = (dtotal * 0.23) - ((dtotal * 0.23) * 0.3);
    printf("El precio a pagar es de: $%.2f", precio);
  }
  else
  {
    precio = (dtotal * 0.23);
    printf("El precio a pagar es de: $%.2f", precio);
  }
  return 0;
}
