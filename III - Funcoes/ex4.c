#include <stdio.h>
#include <stdbool.h>

bool eh_divisor(int n, int d){
    return n%d == 0;
}

int qtd_divisores(int m){
    int cont = 0;
    for(int i = 1; i <= m; i++){
        if(eh_divisor(m, i)) cont++;
    }
    return cont;
}

int main(){
    int num;

    bool entrada_invalida = true;
    while(entrada_invalida){
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);

        entrada_invalida = num <= 0;
        if(entrada_invalida) printf("Valor digitado inválido!\n");
        printf("\n");
    }

    printf("O número %d tem %d divisores.\n", num, qtd_divisores(num));

    return 0;
}