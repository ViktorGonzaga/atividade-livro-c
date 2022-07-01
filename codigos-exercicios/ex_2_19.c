#include <stdio.h>

int main(void){
    int numero1, numero2, numero3;
    int soma, media, produto, menor, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    soma = numero1 + numero2 + numero3;
    media = soma / 3;
    produto = numero1 * numero2 * numero3;
    menor = numero1;
    maior = numero1;

    if (numero2 < menor){
        menor = numero2;
    }
    if (numero2 > maior){
        maior = numero2;
    }
    if (numero3 < menor){
        menor = numero3;
    }
    if (numero3 > maior){
        maior = numero3;
    }

    printf("A soma dos tres numeros e %d\n", soma);
    printf("A media dos tres numeros e %d\n", media);
    printf("O produto dos tres numeros e %d\n", produto);
    printf("O menor numero e %d\n", menor);
    printf("O maior numero e %d\n", maior);
    return 0;
}