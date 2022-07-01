#include <stdio.h>

int main(void){
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao, modulo;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;
    modulo = numero1 % numero2;

    printf("A soma dos dois numeros e %d\n", soma);
    printf("A subtracao dos dois numeros e %d\n", subtracao);
    printf("A multiplicacao dos dois numeros e %d\n", multiplicacao);
    printf("A divisao dos dois numeros e %d\n", divisao);
    printf("O modulo dos dois numeros e %d\n", modulo);
    return 0;
}