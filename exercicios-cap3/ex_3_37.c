#include <stdio.h>

int main(void){
    int i = 0;

    while (i <= 300000000)
    {
        if (i % 100000000 == 0){
            printf("%d", i);
        }
        i++;
    }
}