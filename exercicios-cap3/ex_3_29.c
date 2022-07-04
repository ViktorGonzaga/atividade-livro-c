#include <stdio.h>

int main(void){
    int contador = 1;

    while (contador <= 10){
        printf("%s\n", contador % 2 ? "Impar" : "Par");
        printf("%d\n", contador%2);
        contador++;
    }
    return 0;
    /*Obs: Nesse caso, contador%2 retorna um valor numérico, que por sinal é o resto da divisao de um número por 2. Por retornar um valor numérico, será considerado True quando o resto for 1 e False quando o resto for 0.*/
}