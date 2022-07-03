#include <stdio.h>

int main(void){
    int numero_conta;
    float saldo_inicial, total_encargos, creditos, limite_credito, saldo_final;

    printf("Informe o numero da conta (-1 para sair): ");
    scanf("%d", &numero_conta);

    while (numero_conta != -1)
    {
        printf("Informe o saldo inicial: ");
        scanf("%f", &saldo_inicial);
        printf("Informe o total de encargos: ");
        scanf("%f", &total_encargos);
        printf("Informe o total de creditos: ");
        scanf("%f", &creditos);
        printf("Informe o limite de credito: ");
        scanf("%f", &limite_credito);
        saldo_final = saldo_inicial + total_encargos - creditos;

        if (saldo_final > limite_credito)
        {
            printf("Conta: %d\n", numero_conta);
            printf("Limite de credito: R$ %.2f\n", limite_credito);
            printf("Saldo: R$ %.2f\n", saldo_final);
            printf("Limite de credito ultrapassado.\n");
        }
        printf("Informe o numero da conta (-1 para sair): ");
        scanf("%d", &numero_conta);
    }
    return 0;
}