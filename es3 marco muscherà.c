#include <stdio.h>

// macro per calcolare il numero di elementi in un array

int main(void) {
    int a[100];
    double b[50];
    
    size_t dim_a = dim_macro(a);  // Calcol del numero di elementi in a
    size_t dim_b = dim_macro(b);  // calcolo del numero di elementi in b

    printf("a e' un vettore di interi di %ld elementi\n", dim_a);
    printf("b e' un vettore di double di %ld elementi\n", dim_b);

    return 0;
}

