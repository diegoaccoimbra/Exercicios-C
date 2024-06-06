#include <stdio.h>

int fatorial(int n);

int main() {

  int num, fat;

  printf("Número: ");
  scanf("%d", &num);

  fat = fatorial(num);

  printf("\nO fatorial de %d é %d", num, fat);

  return 0;
}

int fatorial(int n) {
  if (n == 0)  {
    return 1;
  }
  else {
    return n * fatorial(n - 1);
  }
}