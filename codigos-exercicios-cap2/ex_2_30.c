#include <stdio.h>

int main(void){
    int numero,a,b,c,d,e;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    a = numero % 10;
    b = numero%100/10;
    c = numero%1000/100;
    d = numero%10000/1000;
    e = numero%100000/10000;

    printf("%d\t%d\t%d\t%d\t%d", e,d,c,b,a);

    return 0;
}