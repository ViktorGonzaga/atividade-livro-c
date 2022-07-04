#include <stdio.h>

int main(void){
    /*Usando loops para fazer tabela.*/
    int contador;

    printf("N\t10*n\t100*n\t1000*n\n");
    contador = 1;
    while (contador <= 10)
    {
        printf("%d\t", contador);
        printf("%d\t", contador * 10);
        printf("%d\t", contador * 100);
        printf("%d\n", contador * 1000);
        contador++;
    }
    return 0;
}