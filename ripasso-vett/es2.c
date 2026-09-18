#include <stdio.h>
#define DIM 10
int main(){
    // dischiarazione
    int vett[DIM];
    int media = 0;
    int n;
    int cnt = 0;
    int totale = 0;
    int min;
    char junk;

    // inizializzazione vettore
    for(int i = 0; i < DIM; i++){
        vett[i] = 0;
    }
    //printf("Sceglimi un numero casuale: ");
    //scanf("%d", &n);

    // popolamento manuale del vettore
    for(int i = 0; i < DIM; i++){
        printf("Inserisci il %d° valore: ", i+1);
        scanf("%d", &vett[i]);
        junk = getchar();
    }
    printf("\n");
    // stampa vettore
    for(int j = 0; j < DIM; j++){
        printf("| %d ", vett[j]);
    }

    //-----

    // altezza minima nel vettore
    min = vett[0];
    for(int j = 0; j < DIM; j++){
        if(vett[i] < min)
            min = vett[i];
    }
    printf("Minimo: %d\n", min);

    // calcolo altezza media
    totale = 0;
    for(int j = 0; j < DIM; j++){
        totale = totale + vett[i];
    }
    media = totale / DIM;
    printf("Media: %d\n", media);

    // conteggio specifica altezza
    printf("Inserisci un'altezza: ");
    scanf("%d", &n);
    junk = getchar();

    cnt = 0;
    for(int j = 0; j < DIM; j++){
        if(vett[i] == n)
            cnt++;
    }
    printf("Il numero da te inserito compare %d volte all'interno del vettore!\n", cnt);
    
    // celle in cui altezza è inferiore a media
    for(int j = 0; j < DIM; j++){
        if(vett[i] < media){
            printf("Posizione: %d\n", i);
        }
    }
    return 0;
}