#include <stdio.h>
/*Na verdade esse eh o exercicio 33*/
int main(void){
    int lado_quadrado;
    int altura_quadrado;
    int x,y;
    int valor;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", &lado_quadrado);

    altura_quadrado = lado_quadrado;
    x = lado_quadrado;
    y = altura_quadrado;

    while (x>0){
        while (y>0){
            if (x == lado_quadrado || x == 1){
                printf("*");
            }
            else if (y == altura_quadrado || y == 1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
            y--;
        }
        printf("\n");
        y = altura_quadrado;
        x--;
    }

    return 0;
}