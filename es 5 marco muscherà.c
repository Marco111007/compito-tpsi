#include<stdio.h>
#include<string.h> 

void swap(int *a, int *b);
int main(void) {
    int a=5;
    a++; 
    int *pa=&a;  
    printf("a vale %d, a e' all'indirizzo di memoria %p\n", *pa, pa);
    int b[5] = {1, 2, 3, 4, 5};
    int *pb = b;  
    while (pb < &b[5]) {  
        printf("%d\t", *pb);
        pb++;  
    }
    printf("\n");

    char c[5] = "ciao"; 
    strcpy(c, "miao"); 
    printf("%s\n", c);

    char *d = "ciao";  
    d = "miao";  
    printf("%s\n", d);

    int aa=3;
    int bb=4;
    int *paa = &aa, *pbb = &bb;  
    printf("priva di swap: aa=%d bb=%d\n", *pa, *pb);
    swap(paa, pbb); 
    printf("dopo swap: aa=%d bb=%d\n", *pa, *pb);

    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a; 
}

