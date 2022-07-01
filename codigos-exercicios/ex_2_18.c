#include <stdio.h>

int main(void){
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2){
        printf("O numero %d e maior que o numero %d\n", numero1, numero2);
    }
    if (numero1 < numero2){
        printf("O numero %d e menor que o numero %d\n", numero1, numero2);
    }
    if (numero1 == numero2){
        printf("O numero %d e igual ao numero %d\n", numero1, numero2);
    }
    return 0;
}
