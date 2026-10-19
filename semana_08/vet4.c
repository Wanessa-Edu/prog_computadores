#include<stdio.h>
int main()
{
    // VETOR DE CARACTERES
    char dias[7][20];

    // ENTRADA
    for(int i=0; i<7; i++){
        printf("Dia %d...: ", (i+1) );
        scanf("%s", &dias[i]);
    }

    // SAIDA
    for(int i=0; i<7; i++){
        printf("\n%d - Dia...: %s", (i+1), dias[i]);
    }

    return(0);
}
