#include <stdio.h>

int soma_tudo(int n);

int main() {

  printf("%d", soma_tudo(4));
  
  return 0;
}

int soma_tudo(int n) {
  if (n >= 1) {
    return n + soma_tudo(n - 1);
  }
  else {
    return 0;
  }
}