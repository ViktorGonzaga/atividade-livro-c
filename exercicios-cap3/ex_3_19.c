#include <stdio.h>

int main(void)
{
    float renda_fixa_semanal, vendas;
    renda_fixa_semanal = 200;
    printf("Digite o valor das vendas (-1 para sair): ");
    scanf("%f", &vendas);
    while (vendas != -1)
    {
        printf("O pagamento eh de R$ %.2f\n", vendas * 0.09 + renda_fixa_semanal);
        printf("Digite o valor das vendas ou -1 para sair: ");
        scanf("%f", &vendas);
    }
    return 0;
}