#include <stdio.h>

int main()
{

    char nome_func[50];
    float pgto_bruto, pgto_liquido, pgto_final, vlr_imposto, vlr_vale, vlr_emprestimo;

    printf("Qual seu nome?\n");
    scanf("%s", &nome_func);

    printf("Qual seu nome e salario??\n");
    scanf("%f", &pgto_bruto);


    vlr_imposto = pgto_bruto / 0.17;
    vlr_vale = (pgto_bruto * 0.20);

    if (pgto_bruto > 0, vlr_emprestimo = pgto_bruto * 0.30){
        printf("Caro %s, seu salário corresponde a %2.f.\nSeus impostos correspondem a %2.f\nSeu Vale eh de %2.f\nSeu salario liquido eh de %f.2\nVoce tem %f.2 de emprestimo e seu salario final eh de", &nome_func, pgto_bruto, vlr_imposto, vlr_vale, vlr_emprestimo, pgto_final);
    }   else print("Error 404");

    return 0;

}