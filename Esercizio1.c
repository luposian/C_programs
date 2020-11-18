//  Esercizi_Programmazione.c leggere vettore di 10 interi, calcoliamo la media, in un nuovo vettore mettiamo prima tutti quelli minori della media e dopo tutti quelli maggiori.


#include <stdio.h>
int main()
{
    const int MAXN = 10; //dimensione massima del vettore
    
    int N; //occupazione effettiva del vettore
    int somma=0;
    int vett[MAXN]; //Primo vettore
    float media;
    int wett[MAXN]; //Secondo vettore su cui vengolo copiati i valori del primo
    
    int first = 0;
    int last = MAXN-1;
    int i; //indice dei cicli
    
    printf("Programma che calcola la media di un vettore e pone i suoi elementi maggiori e minori della media =)");
    printf("\n");
   
    /*LEGGI LE DIMENSIONI DEL VETTORE*/
    do {
        printf("Quanti numeri saranno inseriti all'interno del vettore? ");
        scanf("%d", &N);
        /*la dimensione del vettore è compresa tra 1 e MAXN*/
        if (N>MAXN || N<=0)
            printf("Errore: il numero deve essere compreso tra %d e 0\n" , MAXN);
        
    }
    while (N>MAXN || N<=0);
    
    /*Leggi la sequenza di nuemri interi e memorizzali all'interno di un vettore*/
    for (i=0; i<N; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vett[i]);
    }
    printf("\n");
    
    /*calcolare la media dei numeri inseriti nel vettore*/
    for(i=0; i<N; i++){
        somma=somma+vett[i];
    }
    media=somma/i;
   /*stampa della media del vettore*/
    printf("La media e' %0.2f ", media);
    printf("\n\n");
    printf("I numeri inseriti minori della media sono all'inizio e quelli maggiori alla fine:");
    printf("\n");
    
    /*stabilire numeri minori e maggiori della media*/
    for(i=0; i<N; i++) //inizio ciclo for per stabilire il nuovo ordine nel nuovo vettore (wett)
        if(vett[i]<=media) //numeri minori della media
            wett[first++]=vett[i];
        else
            wett[last--]=vett[i]; //numeri maggiori della media e riempi vettore nuovo
    
    for(i=0; i<N; i++) //ciclo for per stampare il nuovo vettore
        printf("%d\t", wett[i]);
    printf("\n\n");
    printf("Programma completato ! ! !\n\n");
    
    return 0;
}

