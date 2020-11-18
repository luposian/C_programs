//programma che prende in input n valori, li stampi in ordine crescente

#include <stdio.h>
int main()
{
    const int MAXN = 30; //dimensione massima del vettore
    int j; // indice ciclo for
    int N; //occupazione effettiva del vettore
    int a;
    int vett[MAXN]; //Primo vettore
    
    int i; //indice dei cicli
    
    /*LEGGI LE DIMENSIONI DEL VETTORE*/
    do {
        printf("Quanti numeri saranno inseriti all'inerno del vettore? ");
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
    
    /*stampa del vettore in ordine crescente*/
    for (i=0; i<N; i++) {
        
       for (i=0; i<N; i++) {
            for (j=0; j<N; j++) {
               
                if (vett[i]<vett[j]) {
                    a=vett[i];
                    
                    vett[i]=vett[j];
                    vett[j]=a;
                }
            }
        }
    }
    
    printf("Vettore in ordine crescente: \n");
    for (i=0; i<N; i++)
        printf("%d\n",vett[i]);
    
    return 0;

}


