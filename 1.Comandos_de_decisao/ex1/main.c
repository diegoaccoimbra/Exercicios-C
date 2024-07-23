#include <stdio.h>
#include <math.h>

int main(void) {
  float x1, y1, x2, y2, distancia;

  printf("\nInforme os valores: ");
  printf("\nPonto 1 (x1, y1): ");
  scanf("%f, %f", &x1, &y1);

  printf("\nPonto 2 (x2, y2): ");
  scanf("%f, %f", &x2, &y2);

  distancia = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));

  printf("\nA distância entre os pontos é %.1f", distancia);
  
  return 0;
}