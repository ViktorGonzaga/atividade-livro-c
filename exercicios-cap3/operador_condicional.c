#include <stdio.h>

int main(void)
{
    /*Fazendo da forma padrão*/
    float nota;

    printf("Digite a sua nota: ");
    scanf("%f", &nota);

    if (nota >= 60)
    {
        printf("Aprovado.\n");
    }
    else
    {
        printf("Reprovado.\n");
    }
    /*Fazendo com o operador condicional*/
    printf("Digite a sua nota: ");
    scanf("%f", &nota);
    printf("%s\n", nota >= 60 ? "Aprovado" : "Reprovado");
    return 0;
}