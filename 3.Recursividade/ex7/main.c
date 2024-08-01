#include <stdio.h>

int regr(n);

int main() {

  printf("%d", regr(5));

  return 0;
}

int regr(n) {
  if (n > 0) {
    printf("%d ... ", n);
    return regr(n - 1);
  }
  else {
    return 0;
  }
}