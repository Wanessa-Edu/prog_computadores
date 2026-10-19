#include <stdio.h>

int main()
{
    int numeros[58];

    // Entrada de dados
    for(int i = 0; i < 58; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n--- Valores digitados ---\n");

    // Saída de dados
    for(int i = 0; i < 58; i++){
        printf("Valor na posição %d: %d\n", i, numeros[i]);
    }

    return 0;
}
