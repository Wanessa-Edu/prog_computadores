#include <stdio.h>

int main()
{

    char nome[50];

    printf("Digite seu nome: \n");
    scanf ("%s", &nome);

    for(int i = 1; i <= 6; i++){
        printf("\nCaro %s vc eh o numero %d da lista.", nome, i);
    }


    return 0;
}