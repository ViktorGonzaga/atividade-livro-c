#include <stdio.h>

int main(void){
    float raio;
    float diametro, area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    diametro = 2 * raio;
    area = 3.14 * (raio * raio);
    circunferencia = 2 * 3.14 * raio;

    printf("O diametro do circulo e %f\n", diametro);
    printf("A area do circulo e %f\n", area);
    printf("A circunferencia do circulo e %f\n", circunferencia);
    return 0;
}