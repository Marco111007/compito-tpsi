#include <stdio.h>

int main(void) {
    unsigned int num = 18437;  // Il numero di cui vogliamo visualizzare i byte
    unsigned char *p = (unsigned char*)&num;  // Puntatore a unsigned char per iterare sui singoli byte

    // Ciclo sui 4 byte dell'intero senza segno
    for (int i = 0; i < 4; i++) {
        printf("Byte %d: valore esadecimale = %#x, indirizzo = %p\n", i, p[i], (void*)&p[i]);
    }

    return 0;
}

