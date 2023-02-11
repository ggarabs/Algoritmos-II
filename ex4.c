#include <stdio.h>
#include <math.h>

int main(){
    float cat1, cat2, hip;
    printf("Digite o valor de um cateto: ");
    scanf("%f", &cat1);
    printf("\nDigite o valor de outro cateto: ");
    scanf("%f", &cat2);

    hip = sqrt(pow(cat1, 2) + pow(cat2, 2));

    printf("Um triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa igual a %.2f.\n", cat1, cat2, hip);

    return 0;
}