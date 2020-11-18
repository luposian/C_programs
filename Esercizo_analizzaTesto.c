//Un utente inserisce una serie di frasi da tastiera, su più righe. L'inserimento termina quando l'utente inserisce la parola FINE su una riga da sola.

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define LUN 1024
int main()

{
    //definire variabili
    int i, j;
    int npar;
    char mat[MAX][LUN+1];
    char s[250];
   int N=0;
   int end=0;
    
    //prendere in input frasi da tastiera
    do {
        printf("Testo %d: ", N+1);
        gets(s);
        if (strlen(s)==0)
            printf("Vuota - ripeti\n");
        else if (strlen(s)>LUN)
            printf("TROPPO LUNGA\n");
        else if (strcmp(s, "FINE")==0)
            end=1;
        else
        {strcpy(mat[N], s);
            N++;
        }
} while (end==0);
    
    //quante righe sono state inserite dall'utente
    printf("L'utente ha inserito %d righe\n", N);
    
    //quanti caratteri sono stati inseriti
    {int i, j, chars;
    i = j = chars = 0;
    
    while(s[i] != '\0'){
        char temp = mat[i][j];
        switch(temp){
            
            case '\0':
                i++;
                j=0;
                break;
            default:
                j++;
                chars++;
                break;
        }
    }
    
    printf("L'utente ha inserito %d caratteri\n", chars);
    }
    
    //quanti caratteri alfaumerici sono stati inseriti
    {
        int i, j, chars;
        i = j = chars = 0;
        
        while(s[i] != '\0'){
            char temp = mat[i][j];
            switch(temp){
                case ' ':
                    j++;
                    break;
                case '\0':
                    i++;
                    j=0;
                    break;
                default:
                    j++;
                    chars++;
                    break;
            }
        }
        printf("L'utente ha inserito %d caratteri alfanumerici\n", chars);
    }
    
    //quante parole sono state inserite
    npar = 0 ;
    for (i=0; i<N; i++)
         {
            
            for (j=0; mat[i][j]!=0; j++)
            {
                /* verifico se [i][j] è il carattere
                 iniziale di una parola */
                 if ( isalpha(mat[i][j]) &&
                       
                       ((j==0)|| !isalpha(mat[i][j-1])) )
                {
                    npar++ ;
                }
            }
}
    printf("L’utente ha inserito %d parole\n", npar);

}

