#include <stdio.h>

int main(void)
{
    float quilometros_percorridos, gasolina_colocada;
    float consumo_medio;
    int i;
    float total_gasolina_colocada = 0;
    float total_quilometros_percorridos = 0;
    float consumo_geral = 0;

    printf("Informe quantos litros abasteceu: ");
    scanf("%f", &gasolina_colocada);
    while (gasolina_colocada != -1)
    {
        printf("Informe quantos quilometros percorreu: ");
        scanf("%f", &quilometros_percorridos);
        consumo_medio = quilometros_percorridos / gasolina_colocada;
        printf("O consumo medio foi de %.2f quilometros por litro.\n", consumo_medio);
        printf("Informe quantos litros abasteceu: ");
        total_gasolina_colocada = total_gasolina_colocada + gasolina_colocada;
        total_quilometros_percorridos = total_quilometros_percorridos + quilometros_percorridos;
        scanf("%f", &gasolina_colocada);
    }
    if (total_gasolina_colocada != 0)
    {
        consumo_geral = total_quilometros_percorridos / total_gasolina_colocada;
        printf("O consumo geral foi de %.2f quilometros por litro.\n", consumo_geral);
    }
    else
    {
        printf("Não foi abastecido nenhum veículo.\n");
    }

    return 0;
}