#include <stdio.h>

int main()
{

    //      L   C
    int valor[3][3];

    //ENTRADA

    //LINHA
    for(int l=0; l< 3; l++){
        //COLUNA
        for(int c=0; c<3; c++){
            printf("Digite o valor na posicao [%d][%d]: ",l, c);
            scanf("%d", &valor[l][c]);
        }
    }

    //SAIDA

    //LINHA
    for(int l=0; l< 3; l++){
        printf("\n");
        //COLUNA
        for(int c=0; c<3; c++){
            printf("%d \t", valor[l][c]);

        }
    }


    return 0;

}
