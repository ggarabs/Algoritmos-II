#include <stdio.h>
#include <stdbool.h>

double exp(int n){
    int fator = 1;
    double valor = 0;

    for(int k = 1; k <= n; k++){
        valor += (1.0/k)*fator;
        fator *= -1;
    }

    return valor;
}

int main(){
    int num;

    bool entrada_valida = false;
    while(!entrada_valida){
        printf("Digite um valor numérico inteiro positivo: ");
        scanf("%d", &num);

        entrada_valida = num >= 1;

        if(!entrada_valida) printf("Entrada inválida!\n\n");
    }

    printf("O resultado da série é %.13f\n", exp(num));

    return 0;
}