#include<stdio.h>
#include<stdlib.h>
void accoda(int **a, int **tail);

int main(void){
    int *a[N] = {NULL};  // vettore di puntatori
    int *tail = a[0];    // puntatore al primo elemento vuoto di a

    // Ciclo che richiama la funzione accoda() per 4 volte
    for(int i = 0; i < N; i++) {
        accoda(a, &tail);
    }

    // Stampa i valori memorizzati in a
    for(int i = 0; i < N; i++) {
        printf("%p\t %d\n", a[i], *a[i]);
    }
    printf("\n");

    return 0;
}

void accoda(int *a[], int **tail){
    int *tmp = (int *)malloc(sizeof(int));
    printf("Inserisci numero: ");
    scanf("%d", tmp);
    printf("\n");

    // Ciclo che inserisce il numero in coda e aggiorna il puntatore tail
    while(*tail != NULL) {
        // Passa alla posizione successiva di a
        (*tail)++;
    }

    // Assegna il valore a *tail e aggiorna tail
    *tail = tmp;
    a[(*tail) - a] = tmp;  // Memorizza l'indirizzo nella posizione corretta
}

