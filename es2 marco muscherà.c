#include <stdio.h>
void inverti_capitalizza_stringa(char *stringa, int len){
    int i=0;
    int j=len-1;
    while (i < j) {
        stringa[i]=toupper(stringa[i]);
        stringa[j]=toupper(stringa[j]);

        char temp=stringa[i];
        stringa[i]=stringa[j];
        stringa[j]=temp;

        i++;
        j--;
    }
    if (i == j) {
        stringa[i] = toupper(stringa[i]);
    }
}

int main(void) {
    char stringa[10]="aeiou";  
    printf("%s\n", stringa);      
    inverti_capitalizza_stringa(stringa,6);  
    printf("%s\n", stringa);     
    return 0;
}

