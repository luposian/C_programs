//esercizio prende input 9 interi li inserisci in una matrice 3x3, calcola la media dei valori inseriti in input, pone 1 in tutte le posizioni in cui gli elementi sono maggiori della media e 0 nelle posizioni in cui sono inferiori, chiede in input un carattere c e stampa avideo una matrice di caratteri dove è presente il carattere c se il corrispondente valore in M è 1 e uno spazio altrimenti.

#include <stdio.h>
int main ()
{
    const int N = 9;
    int mat[3][3]; //marice
    int somma = 0;
    float media;
    int i; //indice ciclo
    int vet[N]; //vettore che prende input
    char carattere;
    char mat_c[3][3];
   
    /*LEGGI in input gli elementi della matrice*/
    for (i=0; i<N; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    
   
    /*calcolo media degli elementi inseriti ll'interno del vettore*/
    for(i=0; i<N; i++){
        somma=somma+vet[i];
    }
    media=somma/9.00;
    
   
    
    /*stampa della media del vettore*/
    printf("La media e' %0.2f ", media);
    
    printf("\n\n");
    
    /*CONVERSIONE DEL VETTORE IN MATRICE*/
    for (int ind=0; ind<9; ind++) {
        int riga=ind/3;
        int col=ind%3;
        mat[riga][col]=vet[ind];
    }
    
    /*STAMPA DELLA MATRICE*/
    int riga; //dichiaro riga all'esterno del ciclo precedente
    int col;
    for(riga=0; riga<3; riga++) /* righe */
    {
        for(col=0; col<3; col++) /* colonne */
        {
            printf("%d    ", mat[riga][col]);
   }
        printf("\n\n");
}

    /*stabilire numeri minori(0) e maggiori della media(1) utilizzando il vettore*/
    for(riga=0; riga<3; riga++) /* righe */
    for(col=0; col<3; col++) /* colonne */
        if (mat[riga][col]>=media)
            mat[riga][col] = 1;
    else
        mat[riga][col] = 0;
   //stampa
    printf("stampa di 0 e 1");
    printf("\n");
    for(riga=0; riga<3; riga++) /* righe */
    {
        for(col=0; col<3; col++) /* colonne */
        {
            printf("%d    ", mat[riga][col]);
        }
        printf("\n\n");
    }
    
    //inserimento carattere da input
    while (getchar()!= '\n');
    printf("inserisci un carattere: ");
    scanf("%c", &carattere);
    printf("\n");
    
    //assegnazione matrice di caratteri
    for(riga=0; riga<3; riga++) /* righe */
        for(col=0; col<3; col++) /* colonne */
            if (mat[riga][col]==1)
                mat_c[riga][col] = carattere;
            else
                mat_c[riga][col] = ' ';
    
    //stampa
 
    for(riga=0; riga<3; riga++) /* righe */
    {
        for(col=0; col<3; col++) /* colonne */
        {
            printf("%c", mat_c[riga][col]);
        }
        printf("\n\n");
        
    }


}
