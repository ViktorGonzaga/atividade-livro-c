#include <stdio.h>

int main(void){
    /*Encontrando os dois maiores números.*/
    int primeiro_maior, segundo_maior;
    int i = 1;
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    primeiro_maior = numero;
    segundo_maior = numero;
    while (i<10)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero > primeiro_maior)
        {
            segundo_maior = primeiro_maior;
            primeiro_maior = numero;
        }
        else if (numero > segundo_maior)
        {
            segundo_maior = numero;
        }
        i ++;
    }
    printf("O primeiro maior numero foi: %d\n", primeiro_maior);
    printf("O segundo maior numero foi: %d\n", segundo_maior);
    
    return 0;
}