//messaggio chiaro: (char[])
//messaggio cifrato: (char[])
//Lut             : (char[])
//N               : (unsigned int)

//N=3
// A B C D E F G...Z
// D E F G H I L...Z

#include <string.h>
#include <stdio.h>
#define MAX 1024

int main()
{
    char msg_chi[MAX];
    char msg_cif[MAX];
    char LUT[26];
    int N;
    int i;
    
    //Leggere un messaggio da input
    printf("Inserisci il messaggio da cifrare (MAIUSCOLO, Max 1024 caratteri): ");
    gets(msg_chi);
    
    //leggere la chiave di cifratura
    printf("Inserisci la chiave del cifrario: ");
    scanf("%d", &N);
    
    //Costruisci un cifrario
    for (i=0; i<26; i++)
        LUT[i] = ((i + N) % 26) + 'A';
    printf("La LUT è: ");
     for (i=0; i<26; i++)
         printf("%c ", LUT[i]);
    printf("\n");
    
    //cifrare il messaggio
    for (i=0; msg_chi[i] != '\0'; i++)
        if(msg_chi[i] != ' ')
        msg_cif[i] = LUT[msg_chi[i]-'A'];
     else
        msg_cif[i] = ' ';
    
    msg_cif[i] = '\0';
    
    //stampa il messaggio cifrato
    printf("Il messaggio cifrato è: ");
    printf("%s\n", msg_cif);
    
    //decifra il messaggio
    for( i = 0; msg_cif[i] != '\0'; i++)
        if(msg_cif[i] != ' ')
        LUT[msg_chi[i]] = msg_cif[i] - N;
        else
            msg_chi[i] = ' ';
    
    msg_chi[i] = '\0';
  
    //stampa il messaggio chiaro
    printf("Il messaggio decifrato è: ");
    printf("%s\n", msg_chi);

    return 0;
}
