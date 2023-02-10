#include <stdio.h>

int main(){
    float massa, altura, IMC;
    printf("Qual a massa da pessoa? ");
    scanf("%f", &massa);
    printf("Qual a altura da pessoa? ");
    scanf("%f", &altura);

    IMC = massa/(altura*altura);

    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.\n", massa, altura, IMC);

    return 0;

}