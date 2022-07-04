#include <stdio.h>

int main(void){

    int aprovados = 0;
    int reprovados = 0;
    int aluno = 1;
    int resultado;

    while (aluno <= 10)
    {
        printf("Digite o resultado do aluno %d: ", aluno);
        scanf("%d", &resultado);
        if (resultado == 1 || resultado == 2)
        {
            if (resultado == 1)
            {
                aprovados ++;
            }
            else
            {
                reprovados ++;
            }
            aluno ++;
        }
        else{
            printf("O resultado deve ser 1 ou 2.\n");
        }
    }
    printf("Foram aprovados %d alunos.\n", aprovados);
    printf("Foram reprovados %d alunos.\n", reprovados);
    if (aprovados > 8){
        printf("Bonus ao instrutor!");
    }

    return 0;
}