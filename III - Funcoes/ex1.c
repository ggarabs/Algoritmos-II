#include <stdio.h>

float soma(float num1, float num2, float num3){
    return num1 + num2 + num3;
}

int main(){
    float valor1, valor2, valor3;

    printf("Digite três valores numéricos: ");
    scanf("%f %f %f", &valor1, &valor2, &valor3);

    float retorno = soma(valor1, valor2, valor3);

    printf("A soma dos valores digitados é %.2f", retorno);

    return 0;
}