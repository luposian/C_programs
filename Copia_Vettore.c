//programma che prende in input n valori, li inserisca in un vettore e poi ne faccia una copia in un nuovo vettore

#include <stdio.h>
int main()
{
    const int MAXN = 30; //dimensione massima del vettore
    
    int N; //occupazione effettiva del vettore
    
    int vett[MAXN]; //Primo vettore
    
    int wett[MAXN]; //Secondo vettore su cui vengolo copiati i valori del primo
    
    int i; //indice dei cicli
    
    /*LEGGI LE DIMENSIONI DEL VETTORE*/
    do {
        printf("quanti numeri saranno inseriti all'inerno del vettore? ");
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
    
    /*stampa del vettore*/
    printf("La sequenza inserita e' la seguente\n");
    for (i=0; i<N; i++)
        printf("Elemento %d : %d\n", i+1, vett[i]);
    printf("\n");
    
    /*copia il contenuto di vett[] in wett[]*/
    for (i=0; i<N; i++) {
        wett[i]=vett[i];
    }
    printf("I contenuti del vettore copiato sono i seguenti\n");
    for (i=0; i<N; i++)
        printf("Elemento %d : %d\n", i+1, wett[i]);
    printf("\n");
    return 0;
}



