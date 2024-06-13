#include <stdio.h>
int inverte_numero(int n);
int main() {

  printf("%d", inverte_numero(126));
  
  return 0;
}

int inverte_numero(int n) {
  if (n > 0) {
    printf("%d", n % 10);
    return inverte_numero(n / 10);
  }
  else {
    return printf("\n");
  }
}