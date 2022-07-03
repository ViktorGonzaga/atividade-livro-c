#include <stdio.h>

int main(void){
    /*Achando o maior numero*/
    int i, maior, numero;

    i = 1;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    maior = numero;

    while(i < 10){
        printf("Digite o numero: ");
        scanf("%d", &numero);
        if (numero > maior){
            maior = numero;
        }
        i++;
    }

    printf("O maior numero inserido foi %d", maior);

    return 0;

}