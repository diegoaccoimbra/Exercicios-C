#include <stdio.h>

void troca_valores(int *x, int *y);

int main(void) {
    int a = 1, b = 2;
    int *a_ptr, *b_ptr;

    a_ptr = &a;
    b_ptr = &b;

    printf("a = %d\nb = %d\n", *a_ptr, *b_ptr);
    
    troca_valores(a_ptr, b_ptr);
    
    printf("a = %d\nb = %d\n", *a_ptr, *b_ptr);

    return 0;
}

void troca_valores(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}