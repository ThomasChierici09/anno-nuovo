#include <stdio.h>
#define ADIM 10
int main(){

    int vett[ADIM];
    int i = 0;

    for(i = 0; i < ADIM; i++){
        printf("Inserisci il %d° valore: ", i+1);
        scanf("%d", &vett[i]);
    }

    i = 0;

    printf("Vettore finale: ");

    for(int j = 0; j < ADIM; j++){
        printf("| %d ", vett[j]);
    }
    printf("|");
    printf("\n");

    return 0;
}