#include <stdio.h>
#include <stdbool.h>

float c2f(float temp){
    return (9.0)*temp/5 + 32;
}

float f2c(float temp){
    return 5.0/9*(temp - 32);
}

int main(){
    int opcao;
    bool entrada_invalida = true;
    while(entrada_invalida){
        printf("(1) Converter de Celsius para Fahrenheit\n");
        printf("(2) Converter de Fahrenheit para Celsius\n");

        printf("Escolha uma das opções acima: ");
        scanf("%d", &opcao);

        entrada_invalida = opcao != 1 && opcao != 2;

        if(entrada_invalida) printf("Valor digitado inválido!\n");
        printf("\n");
    }

    float temperatura;
    printf("Digite o valor de temperatura a ser convertida: ");
    scanf("%f", &temperatura);

    float convertida;
    char escala;

    if(opcao == 1){
        convertida = c2f(temperatura);
        escala = 'F';
    }else{
        convertida = f2c(temperatura);
        escala = 'C';
    }

    printf("A temperatura convertida é %.1f %c.\n", convertida, escala);

    return 0;
}