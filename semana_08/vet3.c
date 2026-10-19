#include <stdio.h>

int main()
{

     // CRIAR O VETOR
    float notas[5];
    //notas[0]: Reservado para o RA do aluno.
    //notas[1]: Reservado para a nota da Prova.
    //notas[2]: Reservado para a nota do Trabalho.
    //notas[3]: Reservado para a nota do Seminário.
    //notas[4]: Reservado para armazenar a Média.
    //float media_1b;

    // ENTRADA
    printf("RA.........: ");
    scanf("%f", &notas[0]);

    printf("Prova......: ");
    scanf("%f", &notas[1]);

    printf("Trabalho...: ");
    scanf("%f", &notas[2]);

    printf("Seminario..: ");
    scanf("%f", &notas[3]);

    // PROCESSAMENTO
    // media_1b = (notas[1] + notas[2] + notas[3]) / 3;
    // notas[4] = media_1b;

    notas[4] = (notas[1] + notas[2] + notas[3]) / 3;

    // SAIDA
    printf("\nRA.......: %.0f", notas[0]);
    printf("\nProva....: %.1f", notas[1]);
    printf("\nTrabalho.: %.1f", notas[2]);
    printf("\nSeminario: %.1f", notas[3]);
    printf("\nMedia 1B.: %.1f", notas[4]);


    return 0;

}
