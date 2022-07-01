int main(void){
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 % numero2 == 0){
        printf("O numero %d eh multiplo do numero %d\n", numero1, numero2);
    }
    else{
        printf("O numero %d nao eh multiplo do numero %d\n", numero1, numero2);
    }
}