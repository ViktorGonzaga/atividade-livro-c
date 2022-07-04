#include <stdio.h>

int main(void){
    int lado_quadrado;
    int altura_quadrado;
    int x,y;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", &lado_quadrado);

    altura_quadrado = lado_quadrado;
    x = lado_quadrado;
    y = altura_quadrado;

    while (x > 0){
        while (y > 0)
        {
            printf("*");
            y--;
        }
        printf("\n");
        x--;
        y = altura_quadrado;
    }
    

    return 0;
}