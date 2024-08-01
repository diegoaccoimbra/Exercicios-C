#include <stdio.h>

int main() {
  int num_dias, anos, semanas, dias;

  printf("Insira o número de dias: ");
  scanf("%d", &num_dias);

  if(num_dias >= 365) {
    anos = num_dias / 365;

    semanas = (num_dias % 365) / 7;  

    dias = semanas % 7;
  }
  else {
    anos = 0;
    
    semanas = num_dias / 7;  

    dias = num_dias % 7;
  }

  printf("\nAnos: %d\nSemanas: %d\nDias: %d", anos, semanas, dias);
  
  return 0;
}