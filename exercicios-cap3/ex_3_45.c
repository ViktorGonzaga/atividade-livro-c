#include <stdio.h>

int main(void){
    /*Lados de um triangulo retangulo*/
    int c1, c2, hipotenusa;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%d", &c1);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%d", &c2);
    printf("Digite o comprimento da hipotenusa: ");
    scanf("%d", &hipotenusa);
    if (hipotenusa * hipotenusa == c1 * c1 + c2 * c2){
        printf("O triangulo e retangulo");
    }else{
        printf("O triangulo nao e retangulo");
    }
    return 0;
}