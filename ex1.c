#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Soma = %d\n", n1+n2);
    printf("Subtração = %d\n", n1-n2);
    printf("Multiplicação = %d\n", n1*n2);
    printf("Divisão Inteira = %d\n", n1/n2);

    return 0;

}