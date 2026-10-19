#include<stdio.h>
int main()
{
    // USUARIO QUE FALA O TAMANHO DO VETOR
    int tamanho;

    printf("Quantidade de valores inseridos: ");
    scanf("%d", &tamanho);

    // CRIAÇÃO DE UM VETOR - tamanho: 3
    int numeros[tamanho];
    // indices = 0, 1, 2

    // ENTRADA
    for(int i=0; i<tamanho; i++){
        printf("Digite %d numero...: ", (i+1) );
        scanf("%d", &numeros[i]);
    }

    // SAIDA
    for(int i=0; i<tamanho; i++){
        printf("\n%d - Numeros: %d", (i+1), numeros[i]);
    }

    return(0);
}