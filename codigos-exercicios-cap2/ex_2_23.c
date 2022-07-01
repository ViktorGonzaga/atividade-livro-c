#include <stdio.h>

int main(void){
    int num1, num2, num3, num4, num5;
    int maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);
    printf("Digite o quinto numero: ");
    scanf("%d", &num5);

    maior = num1;
    menor = num1;

    if (num2 < menor){
        menor = num2;
    }
    if (num2 > maior){
        maior = num2;
    }
    if (num3 < menor){
        menor = num3;
    }
    if (num3 > maior){
        maior = num3;
    }
    if (num4 < menor){
        menor = num4;
    }
    if (num4 > maior){
        maior = num4;
    }
    if (num5 < menor){
        menor = num5;
    }
    if (num5 > maior){
        maior = num5;
    }

    printf("O maior numero digitado foi %d\n", maior);
    printf("O menor numero digitado foi %d\n", menor);
    
    return 0;
}