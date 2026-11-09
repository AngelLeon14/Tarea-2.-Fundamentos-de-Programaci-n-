/*León Flores Ángel Ricardo 
Tarea 2. Programa 9
Tabla de multiplicar de un número entero N, comenzando desde el 1*/

#include <stdio.h>
int main()
{
  int num, prod, res;
  printf("Tabla de Multiplicar de un Número Entero\n");
  printf("Ingrese el número entero: ");
  scanf("%d", &num);
  printf("Ingrese hasta qué número desea que llegue la tabla de multiplicar: ");
  scanf("%d", &prod);
  for(int i = 1; i < prod + 1; i++)
  {
    res = num * i;
    printf("%d x %d = %d\n", num, i, res);
  }
  return 0;
}
