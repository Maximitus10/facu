#include <stdio.h>

int main ()
{
  int x, y, z;
  printf("Solicito info de x\n");
  scanf("%d", &x);
  printf("Solicito info de y\n");
  scanf("%d", &y);
  printf("Solicito info de z\n");
  scanf("%d", &z);
  /* Ejercicio 1:
  printf("x + y + 1 = %d\n", x + y + 1);
  printf("z * z + y * 45 - 15 * x = %d\n", z * z + y * 45 - 15 * x);
  printf("y - 2 == (x * 3 + 1) mod 5 = %d\n", y - 2 == (x * 3 + 1) % 5);
  printf("y / 2 * x = %d\n", y / 2 * x);
  */
  /* Ejercicio 2:
      a:
        x = 5;
        printf("x = %d\n", x);
      b:
        x = x + y;
        printf("x = %d, y = %d\n", x, y);
        y = y + y;
        printf("x = %d, y = %d\n", x, y);
  */
  y, x = y + y, x + y;
  printf("x = %d, y = %d\n", x, y);
  return 0;
}