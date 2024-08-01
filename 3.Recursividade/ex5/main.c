#include <stdio.h>

double aumento(double salario, double x);

int main() {

  printf("R$ %.2lf", aumento(1000.0, 10.0));
  
  return 0;
}

double aumento(double salario, double x) {
  double aumento;
  if (salario < 900) {
    aumento = salario + (1.5 * ((x * 0.01) * salario));
  }
  else {
    aumento = salario + ((x * 0.01) * salario);
    
  }
  return aumento;
}