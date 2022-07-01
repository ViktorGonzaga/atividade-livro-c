#include <stdio.h>

int main(void){
    /* Tabela de Quadrados e Cubos*/

    int zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez;

    zero = 0;
    um = 1;
    dois = 2;
    tres = 3;
    quatro = 4;
    cinco = 5;
    seis = 6;
    sete = 7;
    oito = 8;
    nove = 9;
    dez = 10;

    printf("Numero\tQuadrado Cubo\n");
    printf("%d\t%d\t %d\n", zero, zero*zero, zero*zero*zero);
    printf("%d\t%d\t %d\n", um, um*um, um*um*um);
    printf("%d\t%d\t %d\n", dois, dois*dois, dois*dois*dois);
    printf("%d\t%d\t %d\n", tres, tres*tres, tres*tres*tres);
    printf("%d\t%d\t %d\n", quatro, quatro*quatro, quatro*quatro*quatro);
    printf("%d\t%d\t %d\n", cinco, cinco*cinco, cinco*cinco*cinco);
    printf("%d\t%d\t %d\n", seis, seis*seis, seis*seis*seis);
    printf("%d\t%d\t %d\n", sete, sete*sete, sete*sete*sete);
    printf("%d\t%d\t %d\n", oito, oito*oito, oito*oito*oito);
    printf("%d\t%d\t %d\n", nove, nove*nove, nove*nove*nove);
    printf("%d\t%d\t %d\n", dez, dez*dez, dez*dez*dez);
    return 0;
}