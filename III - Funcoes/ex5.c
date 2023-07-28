#include <stdio.h>
#include <stdbool.h>

bool primo(int num){
    int cont = 0;

    if(num == 1) return false;

    for(int i = 2; i*i <= num; i++){
        if(num%i == 0) return false;
    }

    return true;
}

int main(){
    int n1, n2;

    bool entrada_valida = false;
    while(!entrada_valida){
        printf("Digite dois números inteiros: ");
        scanf("%d %d", &n1, &n2);

        entrada_valida = n1 >= 0 && n2 >= 0;

        if(!entrada_valida) printf("Entrada inválida!\n\n");
    }

    printf("Os números primos entre %d e %d são: ", n1, n2);

    for(int i = n1; i <= n2; i++){
        if(primo(i)) printf("%d ", i);
    }

    return 0;

}