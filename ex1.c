#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Soma = %d\n", n1+n2);
    printf("Subtracao = %d\n", n1-n2);
    printf("Multiplicacao = %d\n", n1*n2);
    printf("Divisao Inteira = %d\n", n1/n2);

    return 0;
}