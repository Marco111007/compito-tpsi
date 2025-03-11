#include <stdio.h>

int distanza(int a[], int x, int y, int n) {
    int *px=null;
    int *py=null;

    for (int i = 0; i < n; i++) {
        if (a[i] == x && px==null) {
            px = &a[i];  
        }
        if (a[i]==y && py==null) {
            py = &a[i];  
        }
    }

    if (px !=null && py !=null) {
        return abs(px - py);  
    }

    return -1;  
}

int main(void) {
    int a[] = {1, 4, 3, 6, 7, 2, 9, 0, 5}; 
    for (int i = 0; i < 9; i++) {
        printf("%d\t", a[i]);  
    }
    printf("\n");

    int x = 3;
    int y = 9;

    int d = distanza(a, x, y, 9);
    if (d != -1) {
        printf("la distanza tra %d e %d e' di %d posizioni\n", x, y, d);
    } else {
        printf("uno o entrambi gli elementi non sono stati trovati.\n");
    }

    return 0;
}

