#include <stdio.h>

int main(void){
    /*Calculo de fatorial*/
    int n, fatorial;
    int i;

    printf("Digite um numero: ");
    scanf("%d", &n);
    fatorial = 1;
    i = n;
    while (n > 0){
        fatorial = fatorial * n;
        n = n - 1;
    }
    printf("O fatorial de %d e %d", i, fatorial);

    return 0;
}