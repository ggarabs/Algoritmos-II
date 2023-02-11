#include <stdio.h>

int main(){
    float massa, altura, IMC;
    printf("Digite a massa da pessoa em kg: ");
    scanf("%f", &massa);
    printf("Digite a altura da pessoa em m: ");
    scanf("%f", &altura);

    IMC = massa/(altura*altura);

    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m eh igual a %.2f.\n", massa, altura, IMC);

    return 0;

}