#include <stdio.h>

int main(void){
    int lado1, lado2, lado3;

    printf("Digite o lado1: ");
    scanf("%d", &lado1);
    printf("Digite o lado2: ");
    scanf("%d", &lado2);
    printf("Digite o lado3: ");
    scanf("%d", &lado3);

    if (lado1 < lado2 + lado3){
        if (lado2 < lado1 + lado3){
            if (lado3 < lado1 + lado2){
                printf("Os lados formam um triangulo");
            }
            else{
                printf("Os lados nao formam um triangulo");
            }
        }
        else{
            printf("Os lados nao formam um triangulo");
        }
    }
    else{
        printf("Os lados nao formam um triangulo");
    }
    return 0;
}