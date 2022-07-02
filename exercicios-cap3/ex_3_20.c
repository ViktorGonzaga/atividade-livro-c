#include <stdio.h>

int main(void){
    /* Calculadora de juros simples anual*/
    float juros, principal, taxa, tempo;
        printf("Digite o valor do principal: ");
        scanf("%f", &principal);
        while (principal != -1){
            printf("Digite a taxa de juros: ");
            scanf("%f", &taxa);
            printf("Digite o tempo de aplicacao: ");
            scanf("%f", &tempo);

            juros = principal * taxa * tempo / 365;
            printf("O valor do juros eh de R$ %.2f\n", juros);
            printf("Digite o valor do principal ou -1 para sair: ");
            scanf("%f", &principal);
        }
        return 0;
}