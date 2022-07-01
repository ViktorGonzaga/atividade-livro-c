#include <stdio.h>

int main(void){
    float imc, altura, peso;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);
    
    if (imc < 18.5){
        printf("Voce esta abaixo do peso.\n");
    }
    else if (imc >= 18.5 && imc <= 24.9){
        printf("Voce esta no peso ideal.\n");
    }
    else if (imc >= 25 && imc <= 29.9){
        printf("Voce esta com sobrepeso.\n");
    }
    else if (imc >= 30 && imc <= 34.9){
        printf("Voce esta com obesidade grau I.\n");
    }
    else if (imc >= 35 && imc <= 39.9){
        printf("Voce esta com obesidade grau II.\n");
    }
    else if (imc >= 40){
        printf("Voce esta com obesidade grau III.\n");
    }
    return 0;
}
