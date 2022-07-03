#include <stdio.h>

int main(void){
    /*Calculadora de salário*/
    int horas_trabalhadas;
    float salario_hora, salario_final;

    printf("Digite a quantidade de horas trabalhadas (-1 para sair): ");
    scanf("%d", &horas_trabalhadas);
    while (horas_trabalhadas != -1){
        printf("Digite o salario por hora: ");
        scanf("%f", &salario_hora);
        if (horas_trabalhadas > 40)
        {
            salario_final = (salario_hora * 40) + (salario_hora * 1.5 * (horas_trabalhadas - 40));
        }
        else
        {
            salario_final = salario_hora * horas_trabalhadas;
        }
        printf("O salario final eh de R$ %.2f\n", salario_final);
        printf("Digite a quantidade de horas trabalhadas (-1 para sair): ");
        scanf("%d", &horas_trabalhadas);
    }
    return 0;
}