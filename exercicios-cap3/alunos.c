#include <stdio.h>

int main(void)
{
    int aprovados, reprovados, i, nota;

    aprovados = 0;
    reprovados = 0;
    i = 1;

    while (i <= 10)
    {
        printf("Digite 1 para aprovado e 2 para reprovado: ");
        scanf("%d", &nota);
        if (nota == 1)
        {
            aprovados = aprovados + 1;
        }
        else
        {
            reprovados = reprovados + 1;
        }
        i = i + 1;
    }
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    if (aprovados > 8)
    {
        printf("Bonus ao instrutor!\n");
    }
    return 0;
}