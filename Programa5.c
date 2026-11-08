/*León Flores Ángel Ricardo 
Tarea 2. Programa 5
Descuento del 8% en productos electrodomésticos si la compra es superior a $2500*/

#include <stdio.h>
int main()
{
  float monto, descuento, total; 
  printf("Ingrese el monto a pagar: ");
  scanf("%f", &monto);
  if (monto > 2500)
  {
    descuento = monto * (8.0 / 100.0);
    total = monto - descuento;
    printf("El monto a pagar es de: $%.2f", total);
  }
  else
  {
    printf("El monto a pagar es de: $%.2f", monto);
  }
  return 0;
}
