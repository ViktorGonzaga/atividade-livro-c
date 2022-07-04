#include <stdio.h>

int main(void){
    /*Tabela usando loops*/
    int x, y;

    printf("A\tA+2\tA+4\tA+6\n");
    y = 1;
    x = 3;

    while ( y <= 5){
        printf("%d\t", x);
        printf("%d\t", x + 2);
        printf("%d\t", x + 4);
        printf("%d\n", x + 6);
        x += 3;
        y++;
    }
    return 0;
}