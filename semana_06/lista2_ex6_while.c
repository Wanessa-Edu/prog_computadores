#include <stdio.h>

int main()
{


    float peso, altura, imc;

    printf("Digite seu peso: (em kg)");
    scanf("%f", &peso);

    printf("Digite sua altura: (em metros, ex. 1.75)");
    scanf("%f", &altura);


    imc = peso /(altura * altura);

    printf("Seu IMC é: %.2f", imc);

    
    return 0;

}
