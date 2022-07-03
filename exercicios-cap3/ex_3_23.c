#include <stdio.h>

int main(void)
{
    /*Imprimindo numeros de 1 a 10 lado a lado*/

    int i;

    i = 1;

    while (i <= 10)
    {
        printf("%d\t", i);
        i++;
    }
    return 0;
}