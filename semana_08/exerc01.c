#include <stdio.h>

int main()
{

    int numeros [7];

    printf("Voce vai digitar 8 numeros inteiros, comece pelo primeiro:");
    scanf("%d", &numeros[0]);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &numeros[1]);

    printf("\nDigite o terceiro numero: ");
    scanf("%d", &numeros[2]);

    printf("\nDigite o quarto numero:");
    scanf("%d", &numeros[3]);

    printf("\nDigite o quinto numero: ");
    scanf("%d", &numeros[4]);

    printf("\nDigite o sexto numero: ");
    scanf("%d", &numeros[5]);

    printf("\nDigite o setimo numero: ");
    scanf("%d", &numeros[6]);

    printf("\nE por fim o, digite o oitavo numero: ");
    scanf("%d", &numeros[7]);

    printf("Voce digitou os numeros: \n%d,\n%d,\n%d,\n%d,\n%d,\n%d,\n%d\ne\n%d.", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4], numeros[5], numeros[6], numeros[7]);


    return 0;

}
